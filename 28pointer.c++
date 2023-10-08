#include <iostream>
using namespace std;
class box{
int l,b,h;
public:
void set_dimension(int x ,int y ,int z){
l=x;b=y;h=z;
}
void show_dimension(){
cout<<l<<b<<h;
}
};
int main(){

   box *p,smallbox;
   p=&smallbox;
   p->set_dimension(2,5,6);
   p->show_dimension();

    return 0;

}
//this pointer


/*
#include <iostream>
using namespace std;
class box{
    public://public hone ke baad bhi dono lbh ka meaning same nhi hai
int l,b,h;
public:
void set_dimension(int l ,int b ,int h){
this->l=l;this->b=b;this->h=h;
}
void show_dimension(){
cout<<this->l<<this->b<<this->h;

cout<<this;
}
};
int main(){

   box smallbox;
   box largebox;

   smallbox.set_dimension(2,5,6);
   smallbox.show_dimension();
   largebox.set_dimension(5,5,8);
   largebox.show_dimension();

    return 0;

}
/*this is a local pointer variable of every instance function contains address
 of the caller obj*/
