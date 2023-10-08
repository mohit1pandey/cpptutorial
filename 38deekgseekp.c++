#include<iostream>
#include<fstream>
using namespace std;
int main(){

/*ifstream fin;
fin.open("myfile.txt",ios::in);
cout<<fin.tellg();
cout<<(char)fin.get();
cout<<(char)fin.get();
cout<<(char)fin.get();
cout<<(char)fin.get();
cout<<fin.tellg();
fin.seekg(7);
cout<<fin.tellg();
cout<<(char)fin.get();
//currently get is pointing at u(7) to point 3 index away from here
fin.seekg(3,ios_base::cur);//current pos se 3 aage chlale gye
 //fin.seekg(-3,ios_base::end);

cout<<(char)fin.get();
*/
ofstream fout;
fout.open("myfile.txt",ios::ate);

fout<<"himohit";
cout<<fout.tellp();
fout.seekp(2,ios_base::beg);
fout<<"manoj";
  return 0;
}

//seekg reutrns get pointer at the given arg
//seekp reutrns put pointer at the given arg
