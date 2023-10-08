#include<iostream>
using namespace std;
//static member values
/*int main(){
    static int a;  //static var has no garblled value by default it is 0
    int b;        //static got allocated in ram at starting,not destroy throughout the program
    cout<<a<<" "<<b;
return 0;
}*/

//static member var 
class car{
    static int grar;//class variable or static member var
    
    int price;//instsnce member var
    int a;
public:
   void set(){

   };

 static int goof(){// static member function

 }
};
int car:: grar=10;//we need to declare it out side of class to now it is true static var
    
int main(){       //the value of grar is unchangable,in every obj it has static value
                  //no matter how many obj we creat grar is got declered only once
    car c1;

}

// instance member function 
/*#include<iostream>
using namespace std;
//static member variable

class account{

int pri,time;
static float roi;
public:
int enter_value(){
    cin>>pri>>time;
 return 0;
}
int SI(){
int c=(pri*time*roi)/100;
cout<<c;

return 0;}
 
 static int set_roi(){
    cin>>roi;
    
  return 0;}
  
 static int show_roi(){
    cout<<roi;
    
  return 0;}

};

float account:: roi=6;
int main(){
 account a1,a2;
//a1.enter_value();
//a1.SI();
//account::set_roi();
account::show_roi();
}*/