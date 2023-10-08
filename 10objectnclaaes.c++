#include<iostream>
using namespace std;
//to add two complax no
class complex{

int a,b;//instnce memcer variable
public:
 void take_data(){
    cin>>a>>b;
 }
 complex sum(complex c){
    complex temp;
    temp.a=a+c.a;
    temp.b=b+c.b;

  return(temp);
 }
 int show_ans(); 
};
     complex c1,c2, c3;
int main(){
     
     c1.take_data();
     c2.take_data();
    c3=c1.sum(c2);//call by obj by passing obj
     c3.show_ans();
return 0;

}
int complex::show_ans(){
cout<<c3.a<<"+"<<c3.b<<"i";
 return 0;
}