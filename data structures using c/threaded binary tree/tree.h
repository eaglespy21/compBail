#define TRUE 1
#define FALSE 0
struct nodeType{
  int info;
  struct nodeType *left;
  struct nodeType *right;
  int rThread;
};
typedef struct nodeType *NODEPTR;

void inTrav(NODEPTR tree);
NODEPTR makeTree(int x);
void setLeft(NODEPTR p, int x);
void setRight(NODEPTR p, int x);

NODEPTR getNode();
void freeNode(NODEPTR);
