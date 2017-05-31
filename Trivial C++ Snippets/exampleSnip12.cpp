#include<iostream>
/*From cppquiz.org */
#include<functional>

template <typename T>
void call_with(typename identity<std::function<void(T)>>::type f, T val){
  f(val);
}

int main(){
  auto print = [] (int x) { std::cout<<x; };
  call_with(print, 42);
  return 0;
}

