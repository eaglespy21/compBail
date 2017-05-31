#include<stdio.h>
#include "circularQ.h"

//struct queue cirQ;
int main(){
  //struct queue *ptoCQ;
  NODEPTR t, p;
  //ptoCQ = &cirQ;
  insert(&p, 1);
  insert(&p, 2);
  insert(&p, 3);
  
  //t = (p)->next;
  //printf("%d\n", t->info);
  /*
  while(t != p){
    printf("%d\n", t->info);
    t=t->next;
  }
  */
  /*
  remove(ptoCQ->q);
  remove(ptoCQ->q);
  t = ptoCQ->q->next;
  while(t != ptoCQ->q){
    printf("%d\n", t->info);
    t=t->next;
  }
  */
  return 0;
}
