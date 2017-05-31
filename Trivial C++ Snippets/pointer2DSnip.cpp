#include<iostream>

int main(){
  int *(*p)[5];
  int a =5;
  p = new int *[3][5];
  for(int i=0;i<3;i++){
   for(int j=0;j<5;j++){
     *p[i][j] = a;
   }
  }
  return 0;
}
