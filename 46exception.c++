//if we have multiple types /unknown  exception
/*
#include<iostream>
#include<stdexcept>
using namespace std;
int main(){
  int a,b,c;
  try
  {
    

   throw runtime_error("run time error");
    throw logic_error("logic error");

  }
  catch( ...)
  {
    cout<<"some error occured";
  }
    return 0;
}
*/

// throwing by function
#include<iostream>
#include<stdexcept>
using namespace std;
   void test() {             //dynamic exception spwcifiaction are depriciated in c++11 and abondend in c++ 17
    throw runtime_error("what the hell");
   }
   
int main(){
  try
  {     
      test();
  }

  catch(int e){
     cout<<"int error"<<e<<endl;
       

  }
  catch(char e){ 
   cout<<"char error"<<e<<endl;

  }
  catch(runtime_error& e){
       cout<<"runtime_error";
       cout<<e.what();
  }

    
  
  
  
  return 0;
}
