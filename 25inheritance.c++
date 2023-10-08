#include<iostream>
using namespace std;
//is a relationship is a public inharetence
class human{
    int age,height,weight;
    public:
    void breath(){
        cout<< "take breath";

    }
};

class superhuman:public human{  //superhuamn is a human

};
int main(){
     superhuman a1;
  a1.breath();
/*it becomes neassceay to make is a relationship as a public inheritnce beaceuse the clild obj
 cannot use the public member of parent but the function are always should be public so to make
 them uable by the child the inhericance should be public*/
  
    return 0;
}