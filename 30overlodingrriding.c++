//problem with early binding
#include <iostream>
using namespace std;
class car{
public:
virtual void shift_gear(){
cout<<"gear no 5 ";
}
 void f1(){
cout<<"f1 normal ";
}
};
class sportcar: public car{
public:

void shift_gear(){   //overriding
cout<<"gear no >5 ";
}
  void f1(int x){ //hiding
cout<<"f1 sport ";
}
};

int main(){
    car *p;
 sportcar s1;
                        //s1.f1(2); early binding no virtual function no late binding
                        // s1.shift_gear();
     p=&s1;             //p->f1(); even though f1 is running cause of early binding
     p->f1();
     p->shift_gear();

  
    return 0;


}

/*
#include<iostream>
using namespace std;
class a{
    

        public:                          //* vptr 3 Byte
    void f1(){

    cout<<"hi f1 here ";
    }
    virtual void f2(){
       cout<<"hi f2 here ";
    }
    virtual void f3(){
      cout<<"hi f3 here ";
    }
    virtual void f4(){
    cout<<"hi f4 here ";
    }

};
class b :public a{
    public:
     void f2(){
      cout<<"f2 of  b";
    }
    void f3(){
     cout<<"f3 of  b";
    }
    void f4(int x){
    cout<<"f4 of  b";
    }

};
int main (){
    a *p,a1;
    b b1;

    p=&b1;

    p->f1();
    p->f3();
    p->f4();           // child ke vptr me f4 wo purana wala hi hoga 
     cout<<sizeof(a);  // because child me virtual f4() as it is inherit hua hai 
    return 0;

}*/