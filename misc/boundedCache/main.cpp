#include <iostream>
#include<stdlib.h>
using namespace std;

class LinkedListNode{
  public:
  LinkedListNode(std::string k, std::string v)
    //word(s), key(k), next(null)
  {
    key = k;
    value = v;
    next = 0;
  }
  LinkedListNode* getNext(){
    return next;
  }
  std::string getKey(){
    return key;
  }
  std::string getValue(){
    return value;
  }
  void setNext(LinkedListNode* p){
    next = p;
  }
  ~LinkedListNode(){
    delete next;
  }
  private:
    std::string key;
    std::string value;
    LinkedListNode* next;
};
/*
class Queue{
 
  private:
    LinkedListNode* front;
    LinkedListNode* rear;
}

void push(Queue q){
}
LinkedListNode* pop(Queue q){
}
*/
LinkedListNode* getNode(std::string k, std::string s){
  LinkedListNode* n = new LinkedListNode(k,s);
  //std::cout<<"Created new node"<<n->getKey()<<std::endl;
  return n;
}

void freeNode(LinkedListNode* p){
  delete p;
}

struct BoundedCache {
  BoundedCache(int maxCapacity) : _maxCapacity(maxCapacity), currCapacity(0),front(0),rear(0) {}
 
  std::string get(const std::string &key) {
    LinkedListNode* travel = front;
    LinkedListNode* prev = front;
    if(currCapacity == 0){
      return "Empty";
    }
    else{
      while(travel->getNext() != NULL){
        if(travel->getKey() == key){
          std::cout<<travel->getValue();
          //add most recently used element to the front of the queue
          prev->setNext(travel->getNext());
          travel->setNext(front);
          front = travel;
          return travel->getValue();
        }
        prev = travel;
        travel = travel->getNext();
        //std::cout<<"Traversing, current elemenet"<<travel->getKey()<<std::endl;
      }
      if(travel->getKey() == key){
        std::cout<<travel->getValue();
        prev->setNext(travel->getNext());
          travel->setNext(front);
          front = travel;
        return travel->getValue();
      }
    }
    return "Key not found";
    // TODO implement this
  }
  void set(const std::string &key, const std::string &value) {
    // TODO implement this
    if(currCapacity >= _maxCapacity){
      //std::cout<<"Full\n";
      front = front->getNext();
      //std::cout<<front->getKey();
    }
    else{
     
        if(currCapacity ==0){
          front = getNode(key, value);
          //std::cout<<"Inside Function set with Value"<<key<<value<<std::endl;
          rear = front;
        }
        else{
          LinkedListNode* n = getNode(key, value);
          rear->setNext(n);
          rear = n;
          //std::cout<<"Adding to list"<<rear->getValue();
        }
       currCapacity++;
  }
  }
 
private:
  int _maxCapacity, currCapacity;
  LinkedListNode* front, *rear;
};


// ("3", "apple") <-> ("2", "there")
//
//
// unordered_map<std::string, LinkedListNode *> _nodeByKey;
//
//



// To execute C++, please define "int main()"
int main() {
  BoundedCache cache(2);
  cache.set("1", "hi");
  //cache.get("1"); // should return "hi"
 
  cache.set("2", "there");
  cache.set("3", "hello");
  //cache.set("3", "hello");
  cache.get("2"); // should return "hi"

  //cache.set("3", "apple");
  //cache.get("3"); // should return ""
  //cache.get("3");
 
  // this should mark ("2", "there") as "recently used"
  // and move it to the front of the list
  //cache.get("2");

 
/*
 
  auto words = { "Hello, ", "World!", "\n" };
  for (const string& word : words) {
    cout << word;
  }
  */
  return 0;
}
