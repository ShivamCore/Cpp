#include<iostream>
#include<stack>   // Include the stack header

using namespace std;

int main()
{
    //declaration
    stack<int> stack1;

    //push value    10,20,30(t)
    stack1.push(10);
    stack1.push(20);
    stack1.push(30);

    //top
    cout << "top element :" << stack1.top();

    //pop
    stack1.pop();
    
    //10,20
    cout << endl << "New Top :" << stack1.top();

    //size: no of element present in stack
    cout << endl << "No. Of element: " << stack1.size();
    
    return 0;
}
