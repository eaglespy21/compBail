#include<iostream>
#include <tr1/unordered_map>
int main(){
  std::string s;
  std::cin>>s;
  std::tr1::unordered_map<int, int> m;
  //std::cout<<s.length()<<std::endl;
  for(int i=0;i<s.length();i++){
    m[int(s[i])]++;
    if(m[int(s[i])]>1){
      std::cout<<s[i]<<std::endl;
      break;
    }
  }  
  return 0;
}
