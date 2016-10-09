#include<iostream>
#include<stdlib.h>
int main(){
  int *a, *b, suma=0, sumb=0, sumsquaresa=0, ssb=0, diff, diffsquares;
  int ansa, ansb, size;
  std::cin>>size;
  a = new int[size];
  b = new int[size];
  for(int i=0;i<size;i++){
    a[i] = rand()%100;
    b[i] = a[i];
  }
  a[2] = 22;
  for(int i=0;i<size;i++){
    suma += a[i];
    sumb += b[i];
    sumsquaresa += a[i] * a[i];
    ssb += b[i] * b[i];
  }
  for(int i=0;i<size;i++){
    std::cout<<a[i]<<" "<<b[i]<<std::endl;
  }
  diff = suma - sumb; 
  diffsquares =  sumsquaresa - ssb;
  ansa = (diff*diff + diffsquares)/(2*diff);
  ansb = (ansa - diff);
  std::cout<<"a="<<ansa<<" b="<<ansb<<std::endl;
  delete [] a;
  delete [] b;
  return 0;
}
