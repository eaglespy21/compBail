#include<iostream>
#include "Node.h"
int main(){
  Node root, *tPtr, *t2Ptr;
  tPtr = &root;
  for(int i=1;i<=6;i++){
    Node* t = new Node(i, tPtr);
    t2Ptr = tPtr;
    tPtr = tPtr->getNext();
    std::cout<<i<<std::endl;
  }
  t2Ptr->setNext(&root); 
  //tPtr->setNext(&root);
  //std::cout<<"t2Ptr:"<<t2Ptr->getNumber()<<std::endl;
  std::cout<<"Result:"<<root.checkForCycle(&root);
  //root.print(&root);
  
  return 0;
}
