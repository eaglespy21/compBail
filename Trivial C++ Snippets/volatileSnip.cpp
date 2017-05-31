/*From https://wenku.baidu.com/view/dd71846cb84ae45c3b358c6c.html### */
#include<iostream>

class TestPrint{
public:
  void print(){
    std::cout<< "TestPrint" <<std::endl;
  }
  void print() const{
    std::cout<< "const TestPrint"<<std::endl;
  }
  void print() volatile{
    std::cout<< "volatile TestPrint"<<std::endl;
  }
  void print() const volatile{
    std::cout<< "const volatile TestPrint"<<std::endl;
  }
};

int main(int argc, char* argv[]){
  TestPrint normal_test;
  normal_test.print();
  
  const TestPrint const_test;
  const_test.print();
  
  volatile TestPrint volatile_test;
  volatile_test.print();
  
  const volatile TestPrint const_volatile_test;
  const_volatile_test.print();
 
  return 0;
}
