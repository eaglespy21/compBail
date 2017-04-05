#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"
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
int delAft(node *p){
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
void displayList(node *t){
  if( t == NULL){
    printf("Empty list\n");
    return;
  }
  while(t != NULL){
    printf("%d\n", t->info);
    t = t->next;
  }
}
