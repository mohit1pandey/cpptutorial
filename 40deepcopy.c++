// shallow copy
/*
#include<iostream>
using namespace std;
 class dummy{
int a,b;

public:
void set_data(int x,int y){
a=x , b=y;
}
void show_data(){
    cout<<a<<" "<<b;
}
dummy(){

}
dummy(dummy &d){
    a=d.a;
    b=d.b;
}
};

int main(){
dummy d1;
d1.set_data(6,7);
dummy d2;//copy cunsturtor    dummy d2(d1);
d2=d1; //d2.operator=(d1); 
d2.show_data();


return 0;

}
*/





//deep copy by copy constructor
//whenever there is an pointer in the class so to copy one obj in another we need a copy constructor differetnt from made by compiler
/*
#include<iostream>
using namespace std;
 class dummy{
int a,b;
int *p=new int;
public:
void set_data(int x,int y,int z){
a=x , b=y , *p=z;
}
void show_data(){
    cout<<a<<" "<<b<<" "<<*p;
}
dummy(){

}
dummy(dummy &d){              
    a=d.a;
    b=d.b;
    *p=*(d.p) ;      //deep copy         //p=d.p shallow copy p is getting the value of previous p p=d.p;
}
~dummy(){

    delete p;
}                  // p has the location of older (new int), so new p will get the same
};

int main(){
dummy d1;
d1.set_data(6,7,6);
dummy d2=d1;//copy cunsturtor    dummy d2(d1);
 //d2.operator=(d1); 
d1.show_data();
cout<<endl;
d2.show_data();

return 0;

}
*/






//deep copy by assignment operetor


#include<iostream>
using namespace std;
 class dummy{
int a,b;
int *p= new int ;

public:
void set_data(int x,int y,int z){
a=x , b=y; *p=z;

}
void show_data(){
    cout<<a<<" "<<b<<" "<<*p;
}
dummy(){

}
dummy operator&=(dummy &d){
   a=d.a;
   b=d.b;
   
   *p=*(d.p);
   return d;
}
~dummy(){
 cout<<"xxx";  //copy assignment me destructor pehle chal jayega 
   delete p;
}
};

int main(){
dummy d1;
 d1.set_data(3,9,6);
dummy d2;
d2.operator&=(d1);
d1.show_data();
cout<<endl;
 d2.show_data();

return 0;

}