#include<iostream>
using namespace std;
//over loding of << >>;
class complex{
   int a,b;
public:
friend istream& operator>>(istream&, complex&);// during intup  actual arg c1 changing,use &
friend ostream&  operator<<(ostream&, complex);//we can use & or not,no actual agr is changing

};
istream& operator>>(istream &din, complex &c){
  cin>>c.a>>c.b;
return(cin);

}
ostream& operator<<(ostream &dout, complex c){

cout<<c.a<<c.b;
return(cout);
}

int main(){


  complex c1,c2;
   cin>>c1;//cin.operetor(c1) just to understand
 cout<<c1;
return 0;
}

//try this as well to know more about & arg
#include<iostream>
using namespace std;
//over loding of << >>;
/*
class complex{
   int a=10,b=30;
public:
friend istream& operator>>(istream&, complex&);// during input  actual arg c1 changing,use &
friend ostream&  operator<<(ostream&, complex);//we can use & or not,no actual agr is changing

};
istream& operator>>(istream &din, complex &c){
  cin>>c.a>>c.b;
return(cin);

}
ostream& operator<<(ostream &dout, complex c){

cout<<c.a<<c.b;
return(cout);
}

int main(){


  complex c1,c2;
   cin>>c1;//cin.operetor(c1) just to understand
 cout<<c1;
return 0;
}*/