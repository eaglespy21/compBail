#include<iostream>
#include "Node.h"
Node:: Node() : num(0), next(NULL){}
Node:: Node(int n, Node* prev) : num(n), next(NULL){ prev->next = this;}
//Shouldn't the assignment operator be defined for the previous statement? 
Node* Node:: getNext() const { return next; }
Node:: ~Node(){ delete next; }
const int Node:: getNumber() const{ return num; }
void Node:: print(Node* ptr){
  while( ptr->next != NULL){
    std::cout<<ptr->getNumber()<<std::endl;
    ptr = ptr->next;
  }
  std::cout<<ptr->getNumber()<<std::endl;
}
bool Node:: checkForCycle(Node * ptr){
  std::cout<<"checkForCycleNode\n";
  Node* ptr1 = ptr;
  Node* ptr2 = (ptr->getNext())->getNext();
  while(ptr1 != NULL || ptr2 != NULL){
    if(ptr1 == ptr2){
      return true;
    }
    ptr1 = ptr1->getNext();
    std::cout<<ptr1->getNumber()<<std::endl;
    if(ptr2->getNext() != NULL){
      ptr2 = ptr2->getNext();
      if(ptr2->getNext() != NULL){
         //ptr2 = ptr2->getNext();
      }
      else{
        return false;
      }
    }
    else{
      return false;
    }
  }
  return false;
}
void Node:: setNext(Node * ptr){
  //std::cout<<"Helllo\n";
  this->next = ptr;
  //std::cout<<"Bye\n";
}
