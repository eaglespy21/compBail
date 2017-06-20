#include<iostream>
#include<stdlib.h>
#include<vector>
#include<map>
#include<limits>
#include<algorithm>
/*Question from GeekforGeeks and help for the algorithm from geeksforgeeks too*/
/*The min_element for map code is from here - https://stackoverflow.com/questions/2659248/finding-minimum-value-in-a-map */
//Required zero based input
using namespace std;
//typedef pair<int, int> MyPairType; //For another time, lets start simple and get this program working first 
//struct CompareSecond{
//  bool opertor()(const MyPairType& left, const MyPairType& right) const{
//    return left.second < right.second;
//  }
//} 
bool compare(pair<int, int> i, pair<int, int> j){
  return i.second < j.second;
}
int main(){
  int T, n, e, w, u, v, sum=0;
  vector< vector<int> > adjMatrix; //Space is necessary
  //vector<int> MST;
  map<int, int> MST;
  cin>>T;
  while(T--){
    cin>>n>>e;
  
  //int adjMatrix[n][n];
  //int u,v;
  //while(cin>>u>>v>>w){ //Will keep waiting for input until crtl-D is hit
    //MST.reserve(n);
    //MST.resize(n);
    map<int, int> vertices;
    adjMatrix.resize(n);
    for(int i=0;i<n;i++){
      adjMatrix[i].resize(n, 0);
      vertices[i] = numeric_limits<int>::max();
    }
    vertices[0] = 0;
    while(e--){
      cin>>u>>v>>w;
      adjMatrix[u][v] = w;
      //adjMatrix[v][u] = w;
    }
    cout<<"Adjacency Matrix\n";
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cout<<adjMatrix[i][j]<<" ";
      }
      cout<<"\n";
    }
    while(MST.size() < n){
      map<int,int>:: iterator minVertexPos = min_element(vertices.begin(), vertices.end(), compare);
      
      //pair<int, int> minVertexPair = *min_element(vertices.begin(), vertices.end(), compare);
      // remove element from set
      
      int minVertex = minVertexPos->first; //minVertexPair.first;
      MST.insert(*minVertexPos);
      vertices.erase(minVertexPos);
      cout<<"Min Vertex selected: "<<minVertex<<endl;
      //int s = *min_element(vertices.begin(), vertices.end()); //vertices is a vector not a map
      //MST.push_back(minVertex);
      for(int i=0;i<n;i++){
        if(adjMatrix[minVertex][i] || adjMatrix[i][minVertex]){
          if(adjMatrix[minVertex][i] < (vertices.find(i)!=vertices.end()?vertices[i]:numeric_limits<int>::max())){ 
              //vertices[i] adds key if it doesn't exist and sends this code into an infinte loop
            if(MST.find(i) != MST.end())
              MST[i] = adjMatrix[minVertex][i] + adjMatrix[i][minVertex];
            if(vertices.find(i) != vertices.end())
              vertices[i] = adjMatrix[minVertex][i] + adjMatrix[i][minVertex];
          }
        }
      }
    }
    sum = 0;
    for(int i=0;i<n;i++){
      cout<<"MST Vertex "<<i<<"Key value= "<<MST[i]<<endl;
      sum += MST[i];
    }
    cout<<"Sum of weights of the edges of the minimum spanning tree\n";
    cout<<sum<<endl; 
  }  
  return 0;
}
