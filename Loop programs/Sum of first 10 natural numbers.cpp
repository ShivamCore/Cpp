#include <iostream>
using namespace std;

//METHOD 1 USING FOR LOOP

int sumUsingFor( )
{
    int sum=0;
    
    for (int i=1; i<11; i++)
    { sum += i;} //same as sum  = sum + i
    
    return sum;
}


//METHOD 2 USING WHILE LOOP

int sumUsingWhile( )
{
    int sum=0;
    int i = 1;
    while ( i<11)
    {
        sum += i;
        i++;
    }
    
    return sum;
}


int main( )
{
    cout << "The sum of the first 10 natural numbers is:" << sumUsingFor() << endl;
    cout << "The sum of the first 10 natural numbers is:" << sumUsingWhile() << endl;
    
    return 0;
}
