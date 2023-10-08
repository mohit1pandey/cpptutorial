#include<iostream>
using namespace std;
class parent{
int a,b;
public:
parent (){

}
virtual ~parent(){
cout<<"parent";
}
};
class chlid:public parent{
int a,b;
public:
chlid(){

}
virtual ~chlid(){
cout<<"child";
}

};
void fun(){
 parent *p;
p=new chlid;

delete p;//before the deletion of p the destructor will run
     //but which one will execute first due to the early binding the destructor of parent will call and it will erase the data in the p
     //now in this case the memory occupied by the dynamic obj will leak
     // to relese the memory we need to make the destructor virtual  


    



};
int main(){
 
  fun();



    return 0;
}