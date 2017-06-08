//#include<stdio.h>

struct nodeType{
  int info;
  struct nodeType *left;
  struct nodeType *right;
  struct nodeType *father;
};
typedef struct nodeType *NODEPTR;

NODEPTR getNode();
void freeNode(NODEPTR);

int info(NODEPTR);
NODEPTR left(NODEPTR);
NODEPTR right(NODEPTR);
NODEPTR father(NODEPTR);

NODEPTR makeTree(int x);
void setLeft(NODEPTR p, int x);
void setRight(NODEPTR p, int x);

void inTrav(NODEPTR tree);
void preTrav(NODEPTR tree);
void postTrav(NODEPTR tree);


