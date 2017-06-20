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
  vector<bool> inSPT;
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
    inSPT.reserve(n);
    inSPT.resize(n, false);
    int iterations = n;
    while(iterations--){
      int closestVertex;
      int min = numeric_limits<int>::max();
      for(int i=1;i<=n;i++)
        if(!inSPT[i])
          if(vertices[i]<min)
            closestVertex = i;
      inSPT[closestVertex] = true;
      for(int i=1;i<=n;i++)
        if(adjMatrix[closestVertex][i])
          if(adjMatrix[closestVertex][i] + adjMatrix[1][closestVertex] < vertices[i])
            vertices[i] = adjMatrix[closestVertex][i] + adjMatrix[1][closestVertex]; // 0 is the source vertex
    }
    for(int i=1;i<=n;i++)
      cout<<i<<"\t"<<vertices[i]<<endl;
  }
  return 0;
}
