#include<iostream>
using namespace std;
/*class icrmt{
int a;
public:
void set_data(int x){
  a=x;

}
void show_data(){
    cout<<" a="<<a;

}
icrmt operator++(){
icrmt c;
c.a =++a;
return c;

}
};
int main(){
icrmt a1,a2;
a1.set_data(5);
a1.show_data();

a2=++a1;//a2=a1.operatoe++();
a1.show_data();
a2.show_data();
return 0;
}*/


//post incemet with an int arg

class icrmt{
int a;
public:
void set_data(int x){
  a=x;

}
void show_data(){
    cout<<" a="<<a;

}
icrmt operator++(int){
icrmt c;
c.a =a++;
return c;

}
};
int main(){
icrmt a1,a2;
a1.set_data(5);
a1.show_data();

a2=a1++;//a2=a1.operatoe++();
a1.show_data();
a2.show_data();
return 0;
}