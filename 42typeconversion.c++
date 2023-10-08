//class type to primitive type
//by casting operater
#include<iostream>
using namespace std;
class complex{
    float a;
    public:
    complex():a(10.4)
    {

    }
    operator int () {
     
     return (a);
    }
};
int main(){
complex c1;
float x;
x=c1;
cout<<x;


    return 0;
}
