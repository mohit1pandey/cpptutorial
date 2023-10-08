#include<iostream>
using namespace std;
class par{
    public:
    void f1(){
        cout<<"f1 paret"<<endl;
    }
    public:
    void f2(){
        cout<<"f2 paret"<<endl;
    }
    public:
   virtual void f3(){
        cout<<"f3 paret"<<endl;
    }
    void f4(){
        cout<<"par f4"<<endl;
    }
};
class child:public par{
    int x;

    public:
    void f2(){
        cout<<"f2 child"<<endl;
    }
    void f3(){
        cout<<"f3 child"<<endl;

    }
    void f4(int x){

   this->x=x;
          cout<<x;
    }
};
int main(){
   par *p;
   child c1;

   p=&c1;
    p->f2();
    p->f3();
    
       return 0;
}