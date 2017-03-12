#define MAXCOLS 80
#define TRUE 1
#define FALSE 0
#include<stdio.h>
//#include<ctype.h>
struct stack{
  int top;
   char items[MAXCOLS];
};
precedance(first, second)
char first, second;
{
  if(first == '('||second == '(')
    return FALSE;
  if(second == ')')
    return TRUE;
  if(first == '/' || first == '*')
    return TRUE;
  if((first == '+' || first == '-') && (second == '/' || second == '*'))
    return FALSE;
  else
    return TRUE;
  return FALSE;
}
char popAndTest(ps, px, pund)
struct stack *ps;
int *pund; 
char *px;
{
  if(empty(ps)){
    *pund = TRUE;
    return;
  }
  *pund = FALSE;
  *px = ps->items[ps->top--];
  return;
}
char pop(ps)
struct stack *ps;
{
  if(empty(ps)){
    printf("%s", "stack underflow");
    exit(1);
  }
  return( ps->items[ps->top--]);
}
empty(ps)
struct stack *ps;
{
  if(ps->top == -1)
    return TRUE;
  else
    return FALSE;
}
push(ps, x)
struct stack *ps;
char x;
{
  ps->items[++(ps->top)] = x;
  return;
}
isOperand(opnd)
char opnd;
{
  return isalpha(opnd);
}
postfix(infix, postr)
char infix [];
char postr [];
{
  int position, und;
  int outpos = 0;
  char topsymb = '+';
  char symb;
  struct stack opstk;
  opstk.top = -1;
  for (position=0; (symb = infix[position]) != '\0';position++){
    if(isOperand(symb)){ //Operands appear in postfix as they appear in infix
      postr[outpos++] = symb;
    }
    else{
      //get top from operator stack while also testing for underflow
      char symb1 = symb;
        //printf("\n%c %c",symb, symb1);
      popAndTest(&opstk, &topsymb, &und); //Value of symb is changing to undefined here, that should not be happening and could be the reason why this code isn't working 
        //printf("\nHello%c %c",symb, symb1);
      //While the latest operator from infix is of lower precedance than operators on the stack, pop operators from stack and append them to postfix expression
      while(!und && precedance(topsymb, symb)){
        postr[outpos++] = topsymb;
        popAndTest(&opstk, &topsymb, &und);
      }
      //while loop breaks when operator on stack is of lower precedance than current operator from infix, push the popped operator back onto stack, push operator from infix onto the stack if not closing paran otherwise pop stack to remove opening paran  
      if(!und){
        push(&opstk, topsymb);
      }
      if(und || (symb != ')')){
        //printf("\n%c ",symb);
        push(&opstk, symb);
      }
      else{
        topsymb = pop(&opstk);
      }
    }
  }
  //append rest of stack
  while(!empty(&opstk)){
    postr[outpos++] = pop(&opstk);
  }
  postr[outpos] = '\0';
  return;
}

main(){
  char infix[MAXCOLS];
  char postr[MAXCOLS];
  int pos = 0;
  while((infix[pos++] = getchar()) != '\n');
  infix[--pos] = '\0';
  printf("%s%s", "the original infix expression is ", infix);
  postfix(infix, postr);
  printf("\n%s\n", postr);
}
