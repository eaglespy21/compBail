#include "linkedList.h"

struct priorityQ{
  struct node* front;
};

int empty(struct priorityQ *pq);

void place(struct priorityQ *pq, int x);

int pop(struct priorityQ*);

void push(struct priorityQ *pq, int x);
