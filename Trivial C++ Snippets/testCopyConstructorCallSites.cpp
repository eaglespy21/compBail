/*Taken from https://stackoverflow.com/questions/21206359/in-which-situations-is-the-c-copy-constructor-called */
#include<iostream>
using namespace std;
class a{
public:
  a(){
    cout<<"Default Constructor called\n";
  }
  a(const a& other){
    cout<<"Copy Constructor called\n";
  }
  a& operator=(const a& other){
    cout<<"Copy Assignment operator called\n";
  }
};

int main(){
  a b;
  a c;
  b = c;
  c = a(b);
  a d(c);
  a *e, *f;
  e = new a();
  f = new a(b);
  for(double i=15.1;i<10.9;i+=0.1){}
  return 0;
}
