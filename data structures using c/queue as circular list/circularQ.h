#include "linkedList.h"
struct queue{
  struct node *q;
};

int empty(NODEPTR *pq);

void insert(NODEPTR *pq, int x);

int remove(NODEPTR * pq);

