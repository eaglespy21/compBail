#include<iostream>
/*From cppquiz.com*/
int foo(){
  return 10;
}

struct foobar{
  static int x;
  static int foo(){
    return 11;
  }
};

int foobar::x = foo();

int main(){
  std::cout<<foobar::x;
  return 0;
}
