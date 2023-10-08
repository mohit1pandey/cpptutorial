#include <iostream>
#include<fstream>
using namespace std;
using namespace std;
int main(){
/*    ifstream fin;//get pointer predefind in ifstream
    char ch;
    int pos;
    fin.open("myfile.txt",ios::in);
    pos=fin.tellg();
    
  while (!fin.eof())
  {
    pos=fin.tellg();
    cout<<pos;
    ch=fin.get();
    
  }
  */
 //put* defind in ofstram class
    
    char ch;
    int pos;
    ofstream fout;
    fout.open("myfile.txt",ios::app);
    pos=fout.tellp();
    cout<<pos;
    fout<<"hi";
    pos=fout.tellp();
    cout<<pos;

    
    fout<<"chuss";
    pos=fout.tellp();
    cout<<pos;
    
     
    
 return 0; 
}
//tellg returns the value of the position at the get pointer is currently pointing
//tellg returns the value of the position at the put pointer in currently pointing
