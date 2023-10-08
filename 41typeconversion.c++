//primitive type to  class type
//by cunstructor
#include<iostream>
using namespace std;
class complex {
    int a,b;
    public:
    complex(){

    }
    complex(int x){
        a=x; b=0;
    
    }
    void set_data(int x,int y ){
        a=x; b=y;

    }
    void show_data(){
        cout<<a<< " "<<b;

    }
};

int main(){
   complex c1;
  int  x=10;
   c1=x;// kind of copy cunstructor
   c1.show_data();
 


 return 0;   
}