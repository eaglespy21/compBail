/*From https://wenku.baidu.com/view/dd71846cb84ae45c3b358c6c.html### */
#include<iostream>

class Outer{
  int m_o;
public:
  class Inner{
    int m_i;
    public:
      Inner(){}
      Inner(Outer m_outer, int x){
        m_outer.m_o = x; 
      } 
  };
  Outer(int y){
    //m_inner.m_i =y;
  }
  void display(){
    std::cout<< m_o << std::endl; //<< m_inner.m_i << std::endl;
  }
  Inner m_inner;
};

int main(){
  Outer objOut(10);
  Outer::Inner objIn(objOut,5);
  objOut.display();
  return 0;
}
