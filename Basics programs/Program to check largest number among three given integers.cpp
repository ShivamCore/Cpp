#include <iostream>
using namespace std;

int main( )
{
    int num1 =0, num2=0, num3=0;
    
    //input
    cout << "Enter the first number:" << endl;
    cin >> num1;
    
    cout << "Enter the second number:" << endl;
    cin >> num2;
    
    cout << "Enter the third number:" << endl;
    cin >> num3;
    
    //calculation
    
    if(num1>num2 && num1 > num3)
        cout << "first is the largest  of all numbers" << "\t";
    
    else if (num2>num1 && num2>num3)
        cout << "second is the largest of all numbers" << "\t";
    
    else if (num3>num1 && num3>num2)
        cout << "third is the largest of all numbers" << "\t";
    
    else if (num1==num2 || num2==num3 || num1==num3)
        cout << "two or more of the largest inputs are same" << "\t";
    
    else
        cout <<"invalid input" <<"\t";
    
    return 0;
}

