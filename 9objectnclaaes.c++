//classes are structures with all member as private
#include<iostream>
using namespace std;
 
 
 /*struct sum
 {  
    int a,b,c;
    
    
    void set_data(){
       
      cin>>a>>b;

    }
    int add_show(){
         
        cout<<a+b;

         return 0;

    }
     
 };

 int main(){
    
    sum s;
    s.set_data();
    s.add_show();
    s.a=10;
   return 0;
 }*/
 /*class sum
 {  
   public:

    int a,b,c;
    
    
    void set_data(){
       
      cin>>a>>b;

    }
    int add_show(){
         
        cout<<a+b;

         return 0;

    }
     
 };

 int main(){
    
    sum s;
    s.set_data();
    s.add_show();
    s.a=10;
   return 0;
 }
*/

 /*public class is =structure;*/

//we can make a member function of a class outside of it by scope resolution
struct sum
 {  
    int a,b,c;
    
    
    void set_data(){
       
      cin>>a>>b;

    }
    int add_show();     
 };

 int main(){
    
    sum s;
    s.set_data();
    s.add_show();
    s.a=10;
   return 0;
 }
    int sum:: add_show(){//member variable outside of class
         
        cout<<a+b;

         return 0;

    }
