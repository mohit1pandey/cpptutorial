#include<iostream>
using namespace std;

// to initlise refrence variable
/* class dummy{
   int x;
   int &a;
public:
dummy():a(x)
{
   x=200;
  cout<<a;
}
};
int main(){


dummy d1;



   return 0;

}*/

//const initialization
/*
class dummy{
   const int x;
   public:
   dummy():x(10)
   {
      cout<<x;
   }
};
int main(){
   dummy d1;
   return 0;

}

*/
// if we not using the list so we cannot initializ obj of one class to another class with out any defaut constructor
/*
#include<iostream>
using namespace std;
class One {
   
     int a;
     int b;
  public:
  One (int x):a(x)
  {

  }
  void show_data(){
   cout<<a;
  }
 };
class Two{
One a1;
public:
Two(One x):a1(20)
{
   a1.show_data();
}
};
int main(){

   One o2(52);
   Two t2(o2);
   //cout<<o2.a; // make int a public


   return 0;
}


*/


//cannot initialise obj of base class in child clss without initializer list

class prnt{
int a;
public:
prnt(int x):a(x)
{
cout<<a;   
}
};
class child:public prnt{
int b;
public:

child(int x, int y):prnt(x),b(y)
{
cout<<" hi child's consjdsaj";
}
};


int main(){
    prnt p1(20);
    child c1(30,90);


   return 0;
}







