#include<iostream>
#include<math.h>
using namespace std;
//default argument 
/*int sum(int,int,int=0  );
int main(){
    int a,b,c;
    cin>>a>>b>>c;

 int s=sum(a,b);
cout <<s;

return 0;
}

int sum(int x, int y,int z  ){
return (x+y+z);
}*/

//overloading

int area(int, int);
float area(int );             //two functions shuld not be same type
int main()
{
    int l,b,r;
    cout<<"inter the length and bredth";
    cin>>l>>b;
    cout<<"inter the radius";
     cin>>r;


     int a1= area(l,b);
     float a2= area(r);
    cout<<"the area of circle is  "<<a2;
    cout<<"the area of ractangle is"<<a1;


    return 0;
}
int area(int x,int y){
    return(x*y);

}
float area (int z){
return(3.147*z*z);
}


//by makig the formal arg diff same function with same no of arg can be created
//but the actual arg should be same


/*
#include<iostream>
using namespace std;
    int  fun(float x){
     return(x+x);
    }
   int fun(int z){
    return(z*z);
   }
   
   int main(){

    int a,b,c;
    
     a=fun(30);
     cout<<a;
     b=fun(80);
    cout<<b;

    return 0;
}
*/