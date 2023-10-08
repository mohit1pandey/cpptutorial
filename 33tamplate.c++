//template class
// template<class  type> class clsss_name{};
/*
#include <iostream>
using namespace std;
class Arraylist{
    struct ControlBlock{
      int capacity;
      int *arr_ptr;
    };
    ControlBlock *s;
    public:
    Arraylist(int capacity){
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new int [s->capacity];
    }
    void add_element(int index, int data){
        if (index >=0 && index<= s->capacity-1)
         {
            s->arr_ptr[index]=data;
         }
         else{
            cout<<"array index is not valid ";
         }   
     }
    void view_element(int index, int &data){
        if (index >=0 && index<= s->capacity-1)
         {
            data=s->arr_ptr[index];
            
         }
         else{
            cout<<"array index is not valid ";
         }   
     }
       // to list whole lsit
       void view_list(){
        int i;
        for ( i = 0; i < s->capacity; i++)
        {
            cout<< s->arr_ptr[i];
        }
        
       }
};
int main(){
    int data;
    Arraylist a1(6);
    a1.add_element(0,3.5);
    a1.add_element(1,0.9);
    a1.add_element(2,4.4);
    a1.add_element(3,8);
    a1.view_element(2,data);
     cout<<data;
     a1.view_list();

    return 0;
}  */

#include <iostream>
using namespace std;
template <class X >   class Arraylist{
    struct ControlBlock{
      int capacity;
      X *arr_ptr;
    };
    ControlBlock *s;
    public:
    Arraylist(int capacity){
        s=new ControlBlock;
        s->capacity=capacity;
        s->arr_ptr=new X [s->capacity];
    }
    void add_element(int index, X data){
        if (index >=0 && index<= s->capacity-1)
         {
            s->arr_ptr[index]=data;
         }
         else{
            cout<<"array index is not valid ";
         }   
     }
    void view_element(int index, X &data){
        if (index >=0 && index<= s->capacity-1)
         {
            data=s->arr_ptr[index];
            
         }
         else{
            cout<<"array index is not valid ";
         }   
     }
       // to list whole lsit
       void view_list(){
        int i;
        for ( i = 0; i < s->capacity; i++)
        {
            cout<< s->arr_ptr[i];
        }
        
       }
};
int main(){
    int data;
    Arraylist <float> a1(6);
    a1.add_element(0,3.5);
    a1.add_element(1,0.9);
    a1.add_element(2,4.4);
    a1.add_element(3,8);
    //a1.view_element(2,data);
     //cout<<data;
     a1.view_list();

    return 0;
    }