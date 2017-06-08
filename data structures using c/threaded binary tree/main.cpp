#include<stdio.h>
#include "tree.h"

int main(){
  NODEPTR pTree;
  NODEPTR p,q;
  int number;
  scanf("%d", &number);
  pTree = makeTree(number);
  while(scanf("%d", &number) != EOF){
    p = q = pTree;
    while(number != p->info && q != NULL){
      p = q;
      if(number < p->info){
        q = p->left;
      }
      else{
        q = p->right;
      }
    }
    if(number == p->info){
      printf("%d is a duplicate\n", number);
    }
    else if(number < p->info){
      setLeft(p, number);
    }
    else{
      setRight(p, number);
    }
  }
  printf("Inorder Traversal\n");
  inTrav(pTree);
  return 0;
}
