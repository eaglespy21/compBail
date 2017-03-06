#include <stdio.h>
main(){
  int n;
  scanf("%d", &n);
  towers(n, 'A', 'C', 'B');
}
towers(n, fromPeg, toPeg, auxPeg)
int n;
char fromPeg, toPeg, auxPeg;
{
  if(n==1){
    printf("\n%s%c%s%c", "move disk 1 from peg ", fromPeg, " to peg ", toPeg);
    return;
  }
  towers(n-1, fromPeg, auxPeg, toPeg);
  printf("\n%s%d%s%c%s%c", "move disk ", n, " from peg ", fromPeg, " to peg ", toPeg);
  towers(n-1, auxPeg, toPeg, fromPeg);
} 

