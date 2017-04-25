#include<stdio.h>
#include "circularQ.h"

struct queue cirQ;
int main(){
  struct queue *ptoCQ;
  struct node *t;
  ptoCQ = &cirQ;
  insert(ptoCQ, 1);
  insert(ptoCQ, 2);
  insert(ptoCQ, 3);
  t = ptoCQ->front;
  while(t != NULL){
    printf("%d\n", t->info);
    t=t->next;
  }
  remove(ptoCQ);
  remove(ptoCQ);
  t = ptoCQ->front;
  while(t != NULL){
    printf("%d\n", t->info);
    t=t->next;
  }
  return 0;
}
