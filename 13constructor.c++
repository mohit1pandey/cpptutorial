#include<iostream>
using namespace std;
class complex
{
private:
int a,b;

public:
complex(int x,int y){
    a=x; b=y;
}
complex(int x){
    a=x;
}
complex(){//default constructor

}
complex(complex &c){
    a=c.a;
    b=c.b;

}
void show_data(){
        cout<<a<<b;

    }
};
int main(){
complex c1(2,6),c2(5),c3;
//I try to make a costructor which copies data of c1 into c4
//complex c4=c1; //default copy
complex c4(c1);
c4.show_data();
return 0;
}