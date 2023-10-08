//constructor in c++
#include<iostream>
using namespace std;
  //instsce member function cannot be static
  //no return type no return value
  // functions named after class called constructor
  class complex
  {
  private:
  int a,b;

  public:
    void show_data(){
        cout<<a<<b;

    }//constructor overloading
  complex(int x,int y); 
  complex(int x) {
    a=x;
  }
  complex(){
    
  }
  };
  complex::complex(int x,int y){
    a=x; b=y;
  } 
  
  int main()
  {
    complex c1(6,5),c2=9,c3;
    c1.show_data();//for c1 1st c2 2nd for c3 3rd constructor got overloded
    c2.show_data();//exact match
    c3.show_data();
    
    return 0;
  }
  
  
  

