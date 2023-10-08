#include<iostream>
//#include<conio.h>
using namespace std;
int main(){

  int x=10;//pointer 
  int* p;
  p=&x;

  cout<<p;
printf("hello world" );
int &y=x;
y++;
cout<<y;
  
}
