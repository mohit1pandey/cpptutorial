#include <iostream>
using namespace std;
class A{
  private:
  int a;
  protected:
  int b;
  public:
  int c;

};
class B:public A{
  public:
  void show_data(){
  cin >>c;

  }
int c;
};
int main(){
A a1;
B b1;
cout<<b1.c;


  return 0;
}
//1 user only can access the public memeber
//2nd user (maker of child class) can access the public and peotected of parent class 
//the 1st user of clild class only can access the public of its class,decelered 
// by the foramt specifire during declaration
