//operater overloading
#include<iostream>
using namespace std;
/*class complex {
int a,b;
public:
void set_data(int x ,int y){
a=x;b=y;
}
void show_data(){
  cout<<a<<"+"<<b<<"i";   
}
complex add(complex c){
    
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
return temp;


}
};
int main(){
complex c1,c2,c3;
c1.set_data(6,5);
c2.set_data(7,9);
c3=c1.add(c2);
c3.show_data();
}*/

//by operater overloding
class complex {
int a,b;
public:
void set_data(int x ,int y){
a=x;b=y;
}
void show_data(){
  cout<<a<<"+"<<b<<"i";   
}
complex operator+(complex c){
    
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;
return temp;


}
};
int main(){
complex c1,c2,c3;
c1.set_data(6,5);
c2.set_data(7,9);
c3=c1+c2;//c3=c1.operator+(c2);
c3.show_data();
}