#include<stdio.h>
#include "stack.h"

struct stack s;
int main(){
  struct stack* ptos;
  ptos = &s;
  push(ptos, 1);
  push(ptos, 2);
  push(ptos, 3);
  displayList(ptos->front);
  pop(ptos);
  pop(ptos);
  displayList(ptos->front);
  return 1;
}
