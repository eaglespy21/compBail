#include<iostream>
#include "Node.h"
Node:: Node() : num(0), next(NULL){}
Node:: Node(int n, Node* prev) : num(n), next(NULL){ prev->next = this;}
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
