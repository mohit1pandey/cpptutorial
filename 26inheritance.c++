#include <iostream>
using namespace std;
//why we use private inheritance
class array{
    int a[20];
    public:
    void insert(int index, int value){
      a[index]=value;
    }
};
class STACK:protected array{
    int top;
    public:
    void push(int value){
      
    insert(top, value);

    }
};
int main(){
    array a1;
    STACK s1;
    a1.insert(6,89);
    //s1.insert(5,6); to prevant this we use private or protecred inheritance
    s1.push(45);
return 0;
}