/*From https://wenku.baidu.com/view/dd71846cb84ae45c3b358c6c.html### */
#include<iostream>
using namespace std;

class Object{
public:
  Object() {}
  void print() const{
    cout<< "const"<<endl;
  }
  void print(){
    cout<< "mutable"<<endl;
  }
};

void print_obj(const Object& obj){
  obj.print();
}

int main(){
  Object obj1;
  const Object obj2;
  Object*const pobj1 = &obj1;
  
  print_obj(obj1);
  print_obj(obj2);
  
  obj1.print();
  obj2.print();
  pobj1->print();
  return 0;
}
