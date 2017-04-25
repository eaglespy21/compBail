#include "linkedList.h"
struct queue{
  struct node *q;
};

int empty(struct node *pq);

void insert(struct node *pq, int x);

int remove(struct node * pq);

