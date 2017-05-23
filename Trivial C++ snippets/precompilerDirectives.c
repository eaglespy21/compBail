#include<stdio.h>
#include<stdlib.h>

int main(){
  #define language 437 
  #if language < 400 
  #undef language 
  #else
  #define language 850 
  #ifdef language
    printf("Hello %d", language);
  #endif
  #endif

  //printf("Hello\n");
  return 0;
}
