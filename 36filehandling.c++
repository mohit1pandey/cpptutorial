#include <iostream>
#include<fstream>
using namespace std;
using namespace std;
int main(){
    ofstream fout;
   ifstream fin;


  fout.open("myfile.txt",ios::ate);//use / instead of(\) 
  fout<<"hello this is mohit pandey and todey i  am lernigg filr heandling in c++ ";
  fout.close();


   

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


// all thngs could be done by obj of fstran as ofstream do
// but not same for if stream
// to write and read we have to save the file first;
