#include <iostream>
using namespace std;
//ways to call a function
//call by values;

/*int sum(int ,int);
int main (){
int a,b;
 cin>>a>>b;
 

int s=sum(a,b);

cout<<s;

}
int sum(int x, int y){
 return (x+y);
}*/


// call by refrence
int sum(int* ,int*);
int main (){
int a,b;
 cin>>a>>b;
 

int s=sum(&a,&b);

cout<<s;

}
int sum(int* x, int* y){//formal arg pointer var 
 return (*x+*y);
 }
