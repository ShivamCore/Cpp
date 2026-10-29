#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream fout;
    char A[] = "Academy";          // 7 characters + the null terminator

    fout.open("my.txt",ios::in);

    
    
    fout.seekp(3, ios_base::beg);


    fout.write(A, 7);              // write the 7 characters, not the terminator


    fout.close();
    return 0;
}
