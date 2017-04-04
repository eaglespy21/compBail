#include<iostream> 
#include<string>
#include<cstring>

int main(){
  std::string str;
  int len;
  std::cin>>str;
  len = str.length();
  char* str2 = new char[len+1];
  strcpy(str2, str.c_str());
  for(int i=0, j=len-1;i<len/2;i++,j--){
    char temp = str2[i];
    str2[i] = str2[j];
    str2[j] = temp;
  }
  std::cout<<str2<<std::endl;
}
