#include <iostream>
#include<fstream>
using namespace std;
int main(){
  ofstream fout;
  fout.open("C:/Users/pc/Desktop/x/myfile.txt",ios::ate);//use / instead of(\) 
  fout<<"hello this is mohit pandey and todey i  am lernigg filr heandling in c++ ";
  fout.close();
return 0;
}
//cout or cin obj are predefind of ofsterm and istream we cannot make them
//cout is used to extract data from program to moniter
//cin is used to insert data from keybord to program
//but in file handling we use ofstream and ifstream clsss to use data
// there are as such no predefind obj so we have to make them
//fout program------>file(insert)
//       (output stream) <<
//fin program<------file(extract)
//       (input stream) >>
