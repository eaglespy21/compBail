//Constructing maps example from cplusplus.com
//Different ways of constructing maps 

#include<iostream>
#include<map>

bool fncomp(char lhs, char rhs){
  return lhs<rhs;
}

struct classComp{
  bool operator()(const char& lhs, const char& rhs) const{
    return lhs<rhs;
  }
};

int main(){
  std::map<char, int> first;
  first['a'] = 10;
  first['b'] = 30;
  first['c'] = 50;
  first['d'] = 70;
  
  std::map<char, int> second(first.begin(), first.end());
  std::map<char, int> third(second);
  std::map<char, int, classComp> fourth; //Class as compare
  bool(*fn_pt)(char, char) = fncomp;
  std::map<char, int, bool(*)(char, char)>fifth(fn_pt);  //Function pointer as compare
  return 0;
}
