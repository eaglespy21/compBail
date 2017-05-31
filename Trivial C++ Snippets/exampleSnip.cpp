/* from https://wenku.baidu.com/view/dd71846cb84ae45c3b358c6c.html### */
#include<iostream>
using namespace std;

class ExBase{
private:
  static int stat;
public:
  static int getStat(){
    return stat;
  }
};
int ExBase::stat = 25;

class ExDer1 : public ExBase{
public: 
  friend int Der1Fn();
};

int Der1Fn(){
  return ExBase::getStat();
}

class ExDer2: public ExBase{};

class ExDer: public ExDer1, public ExDer2{};

int main(){
  ExDer e;
  cout<<Der1Fn()<<endl;
  return 0;
}
