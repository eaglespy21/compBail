#include<stdio.h>
#include<stdlib.h>
#include "linkedList.h"
NODEPTR getNode(){
  NODEPTR newNode;
  newNode = (NODEPTR)malloc(sizeof(nodeType));
  newNode->left = NULL;
  newNode->right = NULL;
  newNode->father = NULL;
  newNode->info = 0;
  return newNode;
}
void freeNode(NODEPTR f){
  free(f);
}

int info(NODEPTR p){
  return p->info;
}

NODEPTR left(NODEPTR p){
  return p->left;
}

NODEPTR right(NODEPTR p){
  return p->right;
}

NODEPTR father(NODEPTR p){
  return p->father;
}

NODEPTR makeTree(int x){
  NODEPTR p;
  p = getNode();
  p->info = x;
  p->left = NULL;
  p->right = NULL;
  p->father = NULL;
  return (p);
}

void setLeft(NODEPTR p, int x){
  if(p == NULL){
    printf("Void Insertion\n");
  }
  else if(p->left != NULL){
    printf("Invalid Operation\n");
  }
  else{
    p->left = makeTree(x);
  }
}

void setRight(NODEPTR p, int x){
  if(p == NULL){
    printf("Void Insertion\n");
  }
  else if(p->right != NULL){
    printf("Invalid Operation\n");
  }
  else{
    p->right = makeTree(x);
  }
}

void inTrav(NODEPTR tree){
  if(tree != NULL){
    inTrav(tree->left);
    printf("%d\n", tree->info);
    inTrav(tree->right);
  }
}

void preTrav(NODEPTR tree){
  if(tree !=NULL){
    printf("%d\n", tree->info);
    preTrav(tree->left);
    preTrav(tree->right);
  }
}

void postTrav(NODEPTR tree){
  if(tree !=NULL){
    postTrav(tree->left);
    postTrav(tree->right);
    printf("%d\n", tree->info);
  }
}
