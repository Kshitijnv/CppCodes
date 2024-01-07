#include<iostream>
#include<fstream>
using namespace std;
int main() { 
// ofstream fout;
// int x=25;
// string str = "DAC";
// fout.open( "text1.txt",ios::app );
// if(!fout){
//     cerr << "File is unable to open " << endl;
// }
// else{
// fout << "Arbaj" << endl;
// fout<< "Age : " << x <<endl;
// fout << "Course : " << str <<endl;
// cout << "File Created and written successfully " << endl;
// }
ifstream fin;
char str1;
// fin.seekg(20,ios::cur);
fin.open("text1.txt");
while(fin.get(str1)){
    cout<<str1;
}
fin.close();
return 0;
}