#include<iostream>
#include "Node.h"
int main(){
  Node root, *tPtr;
  tPtr = &root;
  for(int i=1;i<=6;i++){
    Node* t = new Node(i, tPtr);
    tPtr = tPtr->getNext();
    std::cout<<i<<std::endl;
  }
  root.print(&root);
  return 0;
}
