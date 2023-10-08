//mrmber of onr can be friend of another
class A{
int a,b;
public:
void set_data(){

};
void show_data(){

}

};
class B{

// friend void A:: set_data();
                
friend class A; //if we want to make all function friend
};