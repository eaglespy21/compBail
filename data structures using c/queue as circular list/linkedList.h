//#include<stdio.h>
#define TRUE 1
#define FALSE 0
struct node{
  int info;
  struct node* next;
};

node* getNode();
void freeNode(node* p);
void insAft(int x, node* p);
int delAft(node* p);

void displayList(node* t);
