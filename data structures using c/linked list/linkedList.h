//#include<stdio.h>

struct node{
  int info;
  struct node* next;
};

node* getNode();
void freeNode();
void insAft(int x, node* p);
int delAft(node* p);
