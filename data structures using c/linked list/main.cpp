#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"
/*
struct node{
  int info;
  struct node *next;
};

typedef struct node *nodePtr;

node* getNode(){
  node* newNode; 
  newNode = (node*)malloc(sizeof(node));
  //newNode->info = x;
  newNode->next = NULL;
  return newNode;
}

void freeNode(node* f){
  free(f);
}
void insAft(int x, node* p){
  node *newNode;
  if(p == NULL){
    printf("Void Insertion\n");
    exit(1);
  }
  newNode = getNode();
  newNode->info = x;
  newNode->next = p->next;
  p->next = newNode; 
} 
*/  
/*
void insert(int x, node *list){
  node *newNode, *p;
  newNode = getNode();
  p = list;
  p->next = newNode;
  newNode->next = NULL;
  list = newNode;
}
*/
/*
int delAfter(node *p){
  node* q;
  int r;
  if(p == NULL || p->next == NULL){
    printf("Void deletion\n");
    exit(1);
  }
  else{
    q = p->next;
    r = q->info;
    p->next = q->next;
    freeNode(q);
    return r;
  }
}
*/  
int main(){
  node* first, *t, *t1;
  first = getNode();
  first->info = 1;
  insAft(2, first);
  delAft(first);
  insAft(3,first);
  t = first;
  while(t != NULL){
    printf("%d\n", t->info);
    t1 = t;
    t = t->next;
  }
  insAft(4,t1);
  t = first;
  while(t != NULL){
    printf("%d\n", t->info);
    t = t->next;
  }  
  return 0;
}
