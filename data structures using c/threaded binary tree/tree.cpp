#include<stdio.h>
#include<stdlib.h>
#include "tree.h"

NODEPTR getNode(){
  NODEPTR p = (NODEPTR)malloc(sizeof(nodeType));
  p->info = 0;
  p->left = NULL;
  p->right = NULL;
  p->rThread = 0;
  return p;
}

void freeNode(NODEPTR *p){
  free(p);
}

void inTrav(NODEPTR tree){ // q pointer seems to be trailing the p pointer in this function 
  NODEPTR p, q;
  p = tree;
  do{
    q = NULL;
    while( p != NULL){
      q = p;
      p = p->left;
    }
    if( q != NULL){
      printf("%d\n", q->info);
      p = q->right;
      while(q->rThread && p != NULL){
        printf("%d\n", p->info);
        q = p;
        p = p->right;
      }
    }
  }while(q != NULL);
}

NODEPTR makeTree(int x){
  NODEPTR p;
  p = getNode();
  p->info = x;
  p->left = NULL;
  p->right = NULL;
  p->rThread = TRUE;
  return(p);
}

void setLeft(NODEPTR p, int x){
  NODEPTR q;
  if(p == NULL){
    printf("void insertion\n");
  }
  else if(p->left != NULL){
    printf("Invalid insertion\n");
  }
  else{
    q = getNode();
    q->info = x;
    p->left = q;
    q->left = NULL;
    q->right = p;
    q->rThread = TRUE;
  }
}

void setRight(NODEPTR p, int x){
  NODEPTR q, r;
  if(p == NULL){
    printf("Void Insertion\n");
  }
  else if(!p->rThread){
    printf("Invalid insertion\n");
  }
  else{
    q = getNode();
    q->info = x;
    r = p-> right;
    p->right = q;
    p->rThread = FALSE;
    q->left = NULL;
    q->right = r;
    q->rThread = TRUE;
  }
}
