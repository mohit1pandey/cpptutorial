#include<iostream>
using namespace std;
class dummy{
int a,b,*p;
public:
dummy():a(10),b(20)
{
    p=new int;                          // dynamic constructor
cout<<a<<" "<<b<< " hi there"<<endl;
cout<<p;
}



};
int main(){

  dummy d1;               //dynamic constructor
  dummy* d2=new dummy;    //not initialized by dynamic constructor
  cout<<d2;

    return 0;
}
// the constructor allocates the memory for the dynamic variable of class is called dynamic consteuctor
 