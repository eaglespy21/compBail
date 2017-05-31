#include<iostream>

void fx(){
int x;}
void fy(){
int y;}
void fz(){
int z;}

int main(){
typedef void(*p)();
p functions[3] = {fx,fy,fz};

for(int i=0;i<3;i++){
  //&functions[i]();
  p[i]();
}
}
