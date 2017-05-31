#include<stdio.h>
int main(){
#define language 437
#if language < 400
#undef langauge
#else
#define langauge 850
#ifdef langauge
  printf("%d", language);
#endif
#endif

  return 0;
}
