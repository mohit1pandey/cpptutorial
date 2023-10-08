#include<iostream>
using namespace std;
//unary operator 
class complex{
int a,b;
public:
void set_data(int x, int y){
a=x;b=y;
}
void show_data(){
    cout<<a<<b;

}
friend complex operator-(complex );
};
complex operator-(complex c){
   complex temp;
   temp.a=-c.a;
   temp.b=-c.b;
return(temp);

}
int main(){
complex c1,c2;
c1.set_data(5,9);
c2=-c1;// c2=operetor-(c1); well we can not use it ,it just an refrence
c2.show_data();
  return 0;

    }

  
