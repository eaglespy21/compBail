/* From http://thispointer.com/stdmap-tutorial-part-3-using-user-defined-class-objects-as-key-in-stdmap/ */
#include<iostream>
#include<string>
#include<map>
#include<iterator>

class User{
  std::string m_id;
  std::string m_name;
public:
  User(std::string name, std::string id)
    : m_id(id), m_name(name) {} 
  const std::string& getId() const{
    return m_id;
  }
  const std::string& getName() const{
    return m_name;
  }
  bool operator<(const User& user) const{
    //if(user.m_id < this->m_id){ //This does not?
    if(user.m_name < this->m_name){ //Why does this eliminate duplicate elements?
      std::cout<<"True\n";
      return true;
    }
    else{
      std::cout<<"False\n";
      return false;
    }
  }
};

int main(){
  std::map<User, int> users;
  users.insert(std::make_pair<User, int>(User("Saurabh", "3"), 100));
  users.insert(std::make_pair<User, int>(User("SaurabhClone1", "1"), 200));
  users.insert(std::make_pair<User, int>(User("Saurabh", "2"), 300)); //By default insert uses < operator of the key to order elements
  std::map<User, int>:: iterator it = users.begin();
  for(; it != users.end();it++){
    std::cout<< it->first.getName()<<" "<<it->first.getId()<<" :: "<<it->second<<std::endl;
  }
  return 0;
}
  
