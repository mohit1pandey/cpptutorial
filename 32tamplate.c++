//function tamplate
#include<iostream>
using namespace std;


 template < class X > X big (X x , X y){
  if (x>y)
  {
    return (x);

  }
  else
  {
 return (y);


  }
   


}int main()
{
    cout<<big(6.6,9.7);
        return 0;
}
//if we creat two function with double and int type error (cannot not overload functions distinguished by return tupe)
// we gotta creat a template
