/*From https://www.experts-exchange.com/articles/1415/C-Q-A-Interview-Practice-Questions.html */

#include<iostream>
#include<algorithm>
#include<iterator>

struct g{
  g(): n(0){}
  int operator() (){ 
    return n++;
  }
  int n;
};

int main(){
  int a[10];
  std::generate(a, a+10, g());
  std::copy(a, a+10, std::ostream_iterator<int>(std::cout, " "));
  return 0;
}
