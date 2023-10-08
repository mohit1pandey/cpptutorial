#include <iostream>
using namespace std;
// constructor and destructor inheritace
class A{
int a,b,c;
public:
void set_a(){
cin>>a;
}
A (){
    cout << "class A ";

}
};
class B:public A {

 public:
B ()                           //B():A(){
                               // {  }
{               
                                        
    cout<<"class B ";

}
};
int main(){
    B b;

return 0;
}  
/* in case of destructor

*/