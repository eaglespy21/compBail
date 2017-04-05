#include "stack.h"
#include<stdio.h>
int empty(struct stack *ps){
  return ((ps->front == NULL) ? TRUE: FALSE);
}

void push(struct stack *ps, int x){
  struct node *newNode;
  newNode = getNode();
  newNode->info = x;
  newNode->next = ps->front;
  ps->front = newNode;
}

int pop(struct stack *ps){
  struct node *q;
  int x;
  q = ps->front;
  ps->front = q->next;
  x = q->info;
  freeNode(q);
  return x; //What if return could also call freeNode? Is that possible? 
}
