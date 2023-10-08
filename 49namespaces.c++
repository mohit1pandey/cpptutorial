#include<iostream>
using namespace std;//identifires ke name
//globle 
namespace ms1{
void f1(){              //declaration should be outside
    cout<<"hi there im ms1"<<endl;
}}

namespace ms2
{

    void f1(){
        cout<<"hi there i m ms2"<<endl;
    }
  }
  namespace myspace=ms2;///esa bhi kar satkta hu
  

int main(){
     
     int a=10;
     cout<<a;
    ms1:: f1();
    ms2 :: f1();
    
     
    return 0;
}
// to resolve name conflict





//
/* #include<iostream>
using namespace std;
namespace m2
{
  int x=10;

} 
namespace m2
{
    int x=20;
} 
namespace m=m2;

int main(){

    
cout<<m2::x;




    return 0;
}
*/
//error x is deceleared two times
//inside a namespace we can declare a class
//we can make a haderfile of namespace and after including it we can use it by using keyword