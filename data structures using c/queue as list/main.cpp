#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"
#define TRUE 1
#define FALSE 0
struct queue{
  struct node *front, *rear;
}; 
struct queue q;

int empty(struct queue *pq){
  return((pq->front == NULL) ? TRUE:FALSE);
}

void insert(struct queue *pq, int x){
  struct node* p;
  p = getNode();
  p->info = x;
  p->next = NULL;
  if(pq->rear == NULL){
    pq->front = p;
  }
  else{
    (pq->rear)->next = p;
  }
  pq->rear = p;
}

int remove(struct queue *pq){
  struct node* p;
  int x;
  if(empty(pq)){
    printf("Underflow\n");
    exit(1);
  }
  p = pq->front;
  x = p->info;
  pq->front = p->next;
  if(pq->front == NULL){
    pq->rear == NULL; //If its the last element in the queue, make rear NULL, otherwise it will continue to point to memory that's soon going to be freed
  }
  freeNode(p);
  return x;
}

int main(){
  struct queue* ptoq;
  struct node* t;
  ptoq = &q;
  insert(ptoq, 1);
  insert(ptoq, 2);
  insert(ptoq, 3);
  t = ptoq->front;
  while(t != NULL){
    printf("%d\n", t->info);
    t = t->next;
  }
  remove(ptoq);
  remove(ptoq);

    t = ptoq->front;
    while(t != NULL){
    printf("%d\n", t->info);
    t = t->next;
  }

  return 0;
} 
