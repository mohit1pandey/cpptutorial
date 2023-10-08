//class type to another class type
//copy constructor
#include<iostream>
using namespace std;
class item;
class product{
    int m,n;
    public:
    product(){

    }
    int getM(){
        return (m);
    }
    int getN(){
        return(n);
    }
    void set_data(int x,int y){
        m=x;
        n=y;
    }
    friend void show_data(item,product);
};

class item{
    int a,b;
    public:
    item (){

    }
    item(product &p ){
    a=p.getM();
    b=p.getN();
    }
    friend void show_data(item, product);
};
void show_data(item i1,product p1){
    cout<<i1.a<<" "<<i1.b;
    //cout<<p1.m<<" "<<p1.n;
}

int main(){
 item i1;
 product p1;
 p1.set_data(20,90);
 i1=p1;   
show_data(i1,p1);

    return 0;
}


//copy assignment operator
