#include<iostream>

int main(){
  int i=0;
  int m = ++i;
  std::cout<<m<<std::endl;
  std::cout<<++i<<" "<<++i<<std::endl;
  for(int i=0;i<3;i++)
    std::cout<<i;
  for(int i=0;i<3;++i)
    std::cout<<i;
  std::cout<<std::endl;
  int n=3;
  while(--n>0){
    std::cout<<n;
  }
  n =3;
  while(n-- > 0){
    std::cout<<n;
  }
  return 0;
}
