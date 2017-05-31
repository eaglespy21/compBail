#include<iostream>
#include<string>
#include<future>
/*from cppquiz.org*/

int main(){
  std::string x = "x";
  std::async(std::launch::async, [&x]() {
    x = "y";
  });
  std::async(std::launch::async, [&x]() {
    x = "z";
  });
  std::cout<<x;
}
