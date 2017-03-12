#define MAXCOLS 80
#define TRUE 1
#define FALSE 0
#include<stdio.h>
#include<stdlib.h>
main(){
  char expr[MAXCOLS];
  int position = 0;
  float eval();
  while((expr[position++] = getchar()) != '\n');
  expr[--position] = '\0';
  printf("%s%s", "the original postfix expression is ", expr);
  printf("\n%f\n", eval(expr));
}
struct stack{
  int top;
  float items[MAXCOLS];
};
float eval(expr)
char expr[];
{
  int c, position;
  float opnd1, opnd2, value;
  float oper(), pop(); //Forward declare functions syntax is to do it without arguments? And do it within the funtion that calls them 
  struct stack opndStk;
  opndStk.top = -1;
  for(position=0;(c = expr[position]) != '\0'; position++){
    if(isDigit(c)){
      //printf("\n%c %fsent to push function\n", c, (float)(c-'0'));
      push(&opndStk, (float) (c-'0'));
    }
    else{
      opnd2 = pop(&opndStk);
      opnd1 = pop(&opndStk);
      value = oper(c, opnd1, opnd2);
      //printf("\n%f", value);
      push(&opndStk, value);
    }
  }
  return (pop(&opndStk));
}
isDigit(symb)
char symb;
{
  return(symb >= '0' && symb <= '9');
}
float oper(symb, opn1, opn2)
int symb; //Implicit conversion between ASCII values and characters to enhance programmbility but reduce understanding
float opn1, opn2;
{
  switch(symb){
    case '+': return (opn1 + opn2);
    case '-': return (opn1 - opn2);
    case '*': return (opn1 * opn2);
    case '/': return (opn1 / opn2);
    default: printf("%s", "illegal operation");
             exit(1);
  }
}
push(ps,x)
struct stack *ps;
float x; //Make sure arguments and parameters match
{
  //printf("\npushed %f into stack\n", x);
  ps->items[++(ps->top)] = x;
  return;
}
float pop(ps)
struct stack *ps;
{
  if(empty(ps)){
    printf("%s\n", "stack underflow");
    exit(1);
  }
  return (ps->items[ps->top--]);
}
empty(ps)
struct stack *ps;
{
  if(ps->top == -1){
    return TRUE;
  }
  else{
    return FALSE;
  }
}
