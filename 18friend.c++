#include<iostream>
using namespace std;
//has no caller obj
//decelared in side of class and define out side
class complex{
int a,b;
public:
void set_data(){
    cin>>a>>b;
}
void show_data(){
    cout<<a<<"+"<<+b<<"i";

}
friend complex add_data (complex ,complex );//decelaration

};
 complex add_data(complex x,complex y){
 complex temp;
 temp.a=x.a+y.a;
 temp.b=x.b+y.b;
return temp;
}
int main(){
    complex c1,c2,c3;
    c1.set_data();
    c2.set_data();
    c3=add_data(c1,c2);
    c3.show_data();
    return 0;
    }