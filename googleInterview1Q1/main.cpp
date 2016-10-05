#include<iostream>
int main(){
  int a[10], b[10], sum=0, sumsquares, diff, diffsquares;
  for(int i=0;i=<10;i++){
    a[i] = i;
    b[i] = i;
  }
  for(int i=0;i<10;i++){
    //std::cout<<a[i]<<" "<<b[i]<<std::endl;
    sum += a[i];
    sumsquares += b[i] * b[i];
  }
  diff = sum - sumsquares; 
   
  return 0;
}
