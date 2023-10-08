#include<iostream>
using namespace std;
class integer{
 int a,b;
 public:
  void set_data(int x,int y){
  a=x; b=y;
  }
  void show_data(){
    cout<<"a="<<a<<" b="<<b;
  }
  integer operator-(){
   integer temp;
   temp.a=-a;
   temp.b=-b;
   return temp;


   
  }
  

};
int main(){
  integer i1,i2;
  i1.set_data(3,9);
  i2=-i1;//i2=i1.operater-();//in unary operetor caller obj is in left of operator
  i2.show_data();

return 0;
}