#include <iostream>

using namespace std;

int main( )
{
    int day =0;
    
    cout << "Enter a number from 1 to 7" << endl;
    cin >> day;
    
    switch (day)
    {
        case 1:
            cout <<"monday" <<endl;
            break;
        case 2:
            cout <<"tuesday" << endl;
            break;
        case 3:
            cout <<"wednesday" << endl;
            break;
        case 4:
            cout <<"thursday" << endl;
            break;
        case 5:
            cout <<"friday" << endl;
            break;
        case 6:
            cout <<"saturday" << endl;
            break;
        case 7:
            cout <<"sunday" << endl;
            break;
    }
    
    return 0;
}
