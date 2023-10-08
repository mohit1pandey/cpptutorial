//run time exception handling
#include<iostream>
#include<stdexcept>
using namespace std;
 int main(){
    int a=10,b=0;
    int x;
    try
    {
       if (b==0){
        cout<<"hi";
        throw runtime_error("devide by zero error ");//
       x=a/b;
       }
       
       
    }
    catch( runtime_error &e)
    {
        cout<<"Exeption accured";
        cout<<e.what();
    }
    
    cout<<x;

return 0;
 }