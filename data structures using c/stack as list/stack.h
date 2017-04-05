#include "linkedList.h"

struct stack{
  struct node* front;
};

int empty(struct stack *ps);

void push(struct stack *ps, int x);

int pop(struct stack *ps);
