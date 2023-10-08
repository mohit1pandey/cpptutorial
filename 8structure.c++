#include<iostream>
#include<cstring>
using namespace std;
struct car
{
  char name[20];
  int  model;
private:
  float price;
public:
  int  input(){
   

  cin>>model>>name>>price;
  if (price<50000)
  {
      printf(" car's price is < 50000 plese enter again");
  }
  
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
  //c1.price=25; error c1 can be accessed by mamber variable
  c1.display();
  

  

return 0;
}