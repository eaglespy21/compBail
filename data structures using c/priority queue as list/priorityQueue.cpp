#include "priorityQueue.h"
#include<stdio.h>

void place(struct priorityQ *pq, int x){
  node *p, *q;
  q = NULL;
  for(p = pq->front; p != NULL && x > p->info; p = p->next){
    q = p;
  }
  if(q == NULL){
    push(pq, x);
  }
  else{
    insAft(x,q);
  }
}

int empty(struct priorityQ *pq){
  return ((pq->front == NULL) ? TRUE: FALSE);
}

int pop(struct priorityQ *pq){
  struct node *q;
  int x;
  q = pq->front;
  pq->front = q->next;
  x = q->info;
  freeNode(q);
  return x; //What if return could also call freeNode? Is that possible? 
}

void push(struct priorityQ *pq, int x){
  struct node *newNode;
  newNode = getNode();
  newNode->info = x;
  newNode->next = pq->front;
  pq->front = newNode;
}

