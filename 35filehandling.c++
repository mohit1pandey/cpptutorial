#include <iostream>
#include<fstream>
using namespace std;
using namespace std;
int main(){
    ofstream fout;

   ifstream fin;
   

  fin.open("myfile.txt",ios::in);//use / instead of(\) 
  char ch;
  fout<<"hell \n is my name";


  while (!fin.eof())
  {
    
      ch=fin.get();//fin>>ch;//>>opereatr spce ko kuch nhi manta
  cout<<ch;             // get() sapce is spcae

  }
  
  fin.close();

return 0;
}

/*  by get line function
#include <iostream>
#include<fstream>
using namespace std;
int main(){
    string s;
    getline(cin,s);

    cout<<s;

}

*/