/*From thispointer.com */
#include<map>
#include<string>
#include<iterator>
#include<iostream>

std::map<std::string, int>:: iterator searchByValue(std::map<std::string, int>& mapOfWords, int val){
  std::map<std::string, int>::iterator it = mapOfWords.begin();
  while( it != mapOfWords.end()){
    if(it->second == val){
      return it;
    } 
    it++;
  }
  std::cout<<"Not found\n";
  return mapOfWords.end();
}


int main(){
  std::map<std::string, int> mapOfWords;
  mapOfWords.insert(std::make_pair("Earth", 1));
  mapOfWords.insert(std::make_pair("Moon", 2));
  mapOfWords["Sun"] = 3;
  
  std::map<std::string, int>::iterator it = mapOfWords.find("Moon");
  mapOfWords.erase(it);
  
  //std::cout<<it->first<< " ::"<<it->second<<std::endl; //it doesn't get invalidated? 
  mapOfWords.erase("Earth");

  std::map<std::string, int>:: iterator itD = mapOfWords.begin();

  while(itD != mapOfWords.end()){
    std::cout<< itD->first<< " ::"<< itD->second<<std::endl;
    itD++;
  }
  if(mapOfWords.find("Sun") != mapOfWords.end()){
    std::cout<<"Found Sun\n";
  }
  //if(mapOfWords.find("Earth") == NULL){
  if(mapOfWords.find("Earth") == mapOfWords.end()){
    std::cout<<"Earth was not found\n";
  }
  std::map<std::string, int>::iterator temp = searchByValue(mapOfWords, 3);
  std::cout<<temp->second;
  return 0;
}
