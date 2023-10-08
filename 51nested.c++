//class inside a class
#include<iostream>
#include<cstring>
using namespace std;
class student{
long int rollno;
char name[20];
class address{
    int houseno;
    char street[20];
    char city[20];
    char state[15];
    char pincode[7];
    public:
    void set_address(int h,const char* s,const char* c,const char* st,const char* pin){
        houseno=h;
        strcpy(street,s);
        strcpy(city,c);
        strcpy(state,st);
        strcpy(pincode,pin);

    }
   
   void show_address(){
      cout<<"H. No"<<houseno<<endl;
      cout<<"Street"<<street<<endl;
      cout<<"City"<<city<<endl;
      cout<<"State"<<state<<endl;
      cout<<"Pin NO."<<pincode<<endl;


   }
    };
    address add;

    public:
    void set_rollno(int r){
        rollno =r;
    }
    void set_name(char* n){
        strcpy(name,n);
    }

    
    void set_address(int h,const char* s,const char* c,const char* st,const char* pin){
        add.set_address(h,s,c,st,pin);

    }

   void show_student(){

    cout<<"STUDENT_DATA"<<endl;
    cout<<"rollno"<<rollno<<endl;
    cout<<"name"<<name<<endl;
    add.show_address();
   }



};
int main(){
    
    student s1;
    s1.set_name((char*)"Mohit Pandey");
    s1.set_rollno(19481811);
    s1.set_address(30,"khadi bazar","ranikhet","uttarakhand","263645");
    s1.show_student();


    return 0;
}