#include<stdio.h>
#include "priorityQueue.h"

struct priorityQ pq;
int main(){
  struct priorityQ *ptopq;
  ptopq = &pq;
  place(ptopq, 9);
  place(ptopq, 3);
  place(ptopq, 2);
  displayList(ptopq->front);
  pop(ptopq);
  pop(ptopq);
  displayList(ptopq->front);
  return 1;
}

