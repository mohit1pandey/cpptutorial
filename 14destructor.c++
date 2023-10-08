#include<iostream>
using namespace std;
class complex
{
private:
    /* data */
public:
   
    ~complex();
};


complex::~complex()//no return no return type no arg
{                  //runs before the destruction of an obj
    cout<< "destructor";
}


int main(){
    complex c1;

}