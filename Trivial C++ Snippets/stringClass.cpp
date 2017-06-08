#include<iostream>
#include<string>
#include<cstring>
class String{
public:
  String() {
    m_str = new char[1]; 
    *m_str =0;
  }
  String(int l){
    m_str = new char[l];
    *m_str = 0;
  }
  ~String(){
    delete [] m_str;
  }
  void setBuf(const char* s){
    delete [] m_str;
    m_str = new char[strlen(s)+1];
    strcpy(m_str, s); 
  } 
  String& operator+= (const String& other){
    char *temp = new char[strlen(m_str) + strlen(other.m_str)+1];
    strcpy(temp, m_str);
    strcat(temp, other.m_str);
    setBuf(temp);
    delete [] temp;
    /*
    delete [] m_str;
    m_str = new char[strlen(temp) + strlen(other.m_str)];
    strcpy(m_str, temp);
    strcat(m_str, other.m_str);
    delete [] temp;  //Whenever there is a new there should be a delete
    */
    return *this;
  }
  const char* getString(){
    return m_str;
  }
  String& operator=(const String& other){
    if(m_str == other.m_str){
      return *this;
    }
    setBuf(other.m_str);
  }
private:
  char* m_str;
};

class gameString: public String{
public:
  gameString(){}
  gameString(int l):String(l){}
};

int main(){
  String s;
  String t;
  gameString g(5);
  s += t;
  //s = t;
  //std::cout<<s.getString()<<std::endl;
  std::cout<<g.getString()<<std::endl;
  return 0;
}
