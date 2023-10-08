#include<iostream>
#include<conio.h>
#include<exception>
using namespace std;
class owerspeed: public exception {
int speed;
public:
const char* what(){
return "check the speed and slow it dwon";
}
void set_speed(int speed){
this->speed=speed;
}
void show_speed(){
    cout<<"\n your speed is  "<<speed<<endl;
}

};

class car{
int speed;
public:
car ():speed(0)
{
cout<< "the speed is "<<speed<<"km/h"<<endl;
}
//if the speed is more then the lim it should throw exception
void acclarate(){

while (true)
{
    speed+=5;
    cout<< "the speed is "<<speed<<"km/h"<<endl;
    if (speed>=150)
    {
     owerspeed s;
     s.set_speed(speed);
     throw s;              
    }
    
}

}



};
int main(){
    car mycar;
 try
 {
       mycar.acclarate();
    
 }
 catch(owerspeed s)
 {
    s.what();
 cout<<endl;
 s.show_speed();   
 
 }
 
getch();




    return 0;
}