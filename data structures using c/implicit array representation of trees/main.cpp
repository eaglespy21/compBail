#include<stdio.h>
#define NUMNODES 500
#define TRUE 1
#define FALSE 0
struct nodeType{
  int info;
  int used;
}node[NUMNODES];

void makeTree(int x);
void setLeft(int p, int x);
void setRight(int p, int x);

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

void inTrav(int p){
  if(node[p].used){
    inTrav( 2*p + 1);
    printf("%d\n", node[p].info);
    inTrav( 2*p + 2);
  }
}
  

int main(){
  int p, q, number;
  scanf("%d", &number);
  makeTree(number);
  while(scanf("%d", &number) != EOF){
    p = q = 0;
    while(q < NUMNODES && node[q].used && number != node[p].info){
      p = q;
      if(number<node[p].info)
        q = 2*p + 1;
      else
        q = 2*p+2;
    }
    if(number == node[p].info)
      printf("%d is a duplicate\n", number);
    else if(number < node[p].info)
      setLeft(p, number);
    else
      setRight(p, number);
  }
  inTrav(0);
}
