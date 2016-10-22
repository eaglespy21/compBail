#include<iostream>
//int fibo(int a=0, int b=1);
//int numTerms;
int fib(int x);
int main(){
  int n;
  std::cin>>n;
  //numTerms = n;
  //fibo();
  std::cout<<fib(n)<<std::endl;
  return 0;
}

int fib(int x){
  if(x == 1){
    return 1;
  }
  else if(x == 0){
    return 0;
  }
  else{
    std::cout<<x<<std::endl;
    return fib(x-1) + fib(x-2);
  }
}


/*
int fibo(int a, int b){
  int sum = a + b;
  if(numTerms){
    numTerms--; 
    std::cout<<sum<<std::endl;
    fibo(sum, b+1);

  }
  else{
    return 0;
  }
  //return a;
}
*/
  
