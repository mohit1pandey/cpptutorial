#include<iostream>
#include<cstring>
using namespace std;
//input in struct by a function out side

/*struct car
{
  char name[20];
  int  model;
  float price;

};
car input();
int display(car);

int main(){
  car c1,c2;
  c1=input();
  c2=input();
  display(c1);
  

  

return 0;
}
car input(){
car c;

cin>>c.model>>c.name>>c.price;
return(c);

};
int display(car c){

  cout<<c.model<<c.name<<c.price;
return 0;

};*/


//if input and display were member function
struct car
{
  char name[20];
  int  model;
  float price;
  int  input(){
   

  cin>>model>>name>>price;
  return(0);
      };


  int display(){

  cout<<model<<name<<price;
    return 0;

};
};

int main(){
  car c1,c2;
  c1.input();
  c2.input();
  c1.display();
  

  

return 0;
}