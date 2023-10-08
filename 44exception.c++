//exweption is any abnormal behaviour
//run time error
//exception are off beat situation in the program and the program should be ready to handle it
//with a apropriate response
//try catch and throw


//to catch -ive input in factorial

#include<iostream>
#include<math.h>
using namespace std;
   

    
int main(){
    int n;
   long long int factorial=1;
    cout<<"enter n ";
    try {cin>>n;
    if(n<0){
        throw n;
    
    } }  //error may happen
    
   catch(int e)
   {
    cout<<"n should be +iv or >0";
   }
  

   for ( int i = 1; i <=n; i++)
   {
    factorial *=i;

   }
   cout<<factorial;
   


    return 0;
}