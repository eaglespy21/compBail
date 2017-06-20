#include<iostream>
#include<stdlib.h>
#include<vector>
#include<map>
#include<limits>
#include<algorithm>
using namespace std;

bool compare(pair<int, int> i, pair<int, int> j){
  return i.second < j.second;
}

int main(){
  int T, n, e, w, u, v, sum=0;
  vector< vector<int> > adjMatrix; //Space is necessary
  vector<bool> inMST;
  cin>>T;
  while(T--){
    cin>>n>>e;
    map<int, int> vertices;
    adjMatrix.resize(n+1);
    for(int i=1;i<=n;i++){
      adjMatrix[i].resize(n+1, 0);
      vertices[i] = numeric_limits<int>::max();
    }
    vertices[1] = 0;
    while(e--){
      cin>>u>>v>>w;
      adjMatrix[u][v] = w;
      adjMatrix[v][u] = w;
    }
    cout<<"Adjacency Matrix\n";
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<adjMatrix[i][j]<<" ";
      }
      cout<<"\n";
    }
    inMST.reserve(n);
    inMST.resize(n, false);
    int iterations = n; //Local variables get deallocated once out of scope i.e for the next iteration they are created again 
                        //different from redeclaration
    while(iterations--){
      int minVertex;
      //do{
        //map<int,int>:: iterator minVertexPos = min_element(vertices.begin(), vertices.end(), compare);
      int min = numeric_limits<int>::max();  
      for(int i=1;i<=n;i++)
        if(!inMST[i])
          if(vertices[i]<min)
            minVertex = i;
        //minVertex = minVertexPos->first;
        //cout<<inMST[minVertex]<<endl;
      //}while(inMST[minVertex]);
      //cout<<"Past do while\n";
      inMST[minVertex] = true;
      for(int i=1;i<=n;i++)
        if(adjMatrix[minVertex][i])
          if(adjMatrix[minVertex][i] < vertices[i])
            vertices[i] = adjMatrix[minVertex][i];
    }
    sum = 0;
    for(int i=1;i<=n;i++){
      cout<<"MST Vertex "<<i<<"Key value= "<<vertices[i]<<endl;
      sum += vertices[i];
    }
    cout<<"Sum of weights of the edges of the minimum spanning tree\n";
    cout<<sum<<endl;
  }
  return 0;
}

