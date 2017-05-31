/*from cplusplus.com*/
#include<iostream>
using namespace std;

template<class T>
T getMax(T a, T b){
  T result;
  result = (a>b)? a : b;
  return (result);
}

int main(){
  int i=5,j=6,k;
  float l=10,m=3,n;
  k = getMax<int>(i,j);
  n = getMax<int>(l,m);
  cout<<k<<endl;
  cout<<n<<endl;
  return 0;
}
