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

