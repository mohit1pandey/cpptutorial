//DMA new keyword
int main(){
    int x;
    int *p = new int;
    // float *p= float int; because p cannot access two values;
    //p SMA , int DMA  
    // no var name
    delete p;

    int *o= new int[10];
   delete[] o;


    return 0;
}
