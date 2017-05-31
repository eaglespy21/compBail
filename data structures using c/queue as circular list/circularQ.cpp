#include<stdio.h>
#include<stdlib.h>
#ifndef __linkedList_h_ 
  #define __linkedList_h_
#endif
#include "circularQ.h"

int empty(NODEPTR *pq){
  return ((*pq == NULL) ? TRUE : FALSE);
}

int remove(NODEPTR *pq){
  int x;
  NODEPTR p;
  if(empty(pq) == TRUE){
    printf("stack underflow\n");
    exit(1);
  }
  p = (*pq) -> next; //Rear is pointing to front, remove from front
  x = p->info;
  if(p == *pq){
    //Only one node in queue
    *pq = NULL;
  }
  else{
    (*pq) -> next = p->next;
  }
  freeNode(p);
  return(x);
}

void insert(NODEPTR *pq, int x){
  NODEPTR p;
  p = getNode();
  p->info = x;
  if(empty(pq) == TRUE){
    *pq = p;
    printf("First node %d inserted\n", (*pq)->info);
  }
  else{
    p->next = (*pq) ->next;
  }
  (*pq) -> next = p;
  *pq = p;
  printf("Inserted %d at the end of the list\n", (*pq)->info);
  return;
}
