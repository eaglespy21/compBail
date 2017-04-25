#include "linkedList.h"
struct queue{
  struct node *front, *rear;
};

int empty(struct queue *pq);

void insert(struct queue *pq, int x);
int remove(struct queue *pq);

