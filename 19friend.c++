#include<iostream>
using namespace std;
//one function may be friend of multiple classes
class B;
class A{
int a;
public:
int set_data(int x){
    a=x;
    return 0;
}
friend void add(A,B);
};
class B{
int b;
public:
int set_data(int x){
    b=x;
    return 0;
}
friend void add(A,B);
};
void add(A a1, B b1){
    cout<<a1.a<<"+"<<b1.b<<"="<<a1.a+b1.b;
}


int main(){
A obj1;
B obj2;
obj1.set_data(6);
obj2.set_data(9);
add(obj1,obj2);

}