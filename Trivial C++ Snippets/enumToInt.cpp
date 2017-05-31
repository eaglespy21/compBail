#include<iostream>
int main(){
  //const int Mon=1, Tue=2;
  enum DOW{ Mon = 11, Tue = 12};
  int var = Mon;
  std::cout<<var<<std::endl;
  //int var1 = DOW::Mon;
  //std::cout<<var1<<std::endl;
  return 0;
}
