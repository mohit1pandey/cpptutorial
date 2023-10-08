#include<iostream>
using namespace std;
   void fun();//fun is deceleared inside the main function so it cannot be called outside of it 

int main(){
  fun();


   
return 0;

};
void fun(){
 cout<<"hello world";
 
}
