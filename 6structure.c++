#include<iostream>
#include<cstring>
using namespace std;
//input in struct by a function out side
struct book
{
  int price;
  int pages;
  char name[10];


};
book input();

int main(){
  book b1;
  b1=input();
  cout<<b1.name<<b1.pages<<b1.price;

}


book input(){
  book b;

  cin>>b.name>>b.pages>>b.price;

  return(b);
}

