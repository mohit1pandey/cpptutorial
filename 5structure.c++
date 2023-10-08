#include<iostream>
#include<cstring>
using  namespace std;
int main(){
 /*int a[10]={10,5,6,8,6,9,3,5,6,7};

cout<<a[6];
*/
/*struct mohit
{ 
    int age=20;
    int salary=2500;
    char vill [10]="kunsyari";  
};
 mohit m1;
 int x=m1.salary+m1.age;
 char y[20];
  strcpy(m1.vill,"is my vill");


 cout<<x;
*/
//how to copy data in struct var
struct mohit
{ 
    int age;
    int salary;
    char vill [10];  
};
 mohit m1,m2;
 cin>>m1.age>>m1.salary>>m1.vill;
/*m2.age=20;
m2.salary=m1.salary;
strcpy(m2.vill,m1.vill);

cout<<m2.vill;*/
//the second to copy 
m2=m1;
cout<<m2.age<<m2.salary<<m2.vill;

return 0;
}
