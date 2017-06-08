#include<stdio.h>

void makeTree(int x){
  int p;
  node[0].info = x;
  node[0].used = TRUE;
  for(p=1;p<NUMNODES;p++){
    node[p].used = FALSE;
  }
}

void setLeft(int p, int x){
  int q;
  q = 2 * p + 1;
  if(q >= NUMNODES){
    printf("Array overflow\n");
  }
  else if(node[q].used){
    printf("Invalid insertion\n");
  }
  else{
    node[q].info = x;
    node[q].used = TRUE;
  }
}

void setRight(int p, int x){
  int q;
  q = 2 * p + 2;
  if(q >= NUMNODES){
    printf("Array overflow\n");
  }
  else if(node[q].used){
    printf("Invalid insertion\n");
  }
  else{
    node[q].info = x;
    node[q].used = TRUE;
  }
}

