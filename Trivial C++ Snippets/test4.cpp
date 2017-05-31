#include<iostream>
void pc(std::string& c){std::cout<<"h";}
void pc(std::string&& c){std::cout<<"&";}
int b=1;
int x(){ b++; return b;}
int y(){b *=3; return b-1;}
int z(){b = b+8;return b+2;}

int main(){
int rows=10;
int c= 4;
double **dar = new double*[rows];
/*
for(int i=0;i<rows;i++){
  //*dar[i]= new double[c];
}
*/
//for(char i=0;i<250;i++){}

int n=10,m=3;
float q = n/m;
std::cout<<q;
int *arr = new int[10];
delete arr;
std::string s = "string";
pc("string");
pc(s);

int a = x() - y() + z();
std::cout<<std::endl<<a;
}

