#include<iostream>
#include<queue>   // Include the priority Queue header

using namespace std;

int main()
{
    //create a ( max heap )
    priority_queue <int> queue1;

    // creates a ( min heap )
    //priority_queue <int, vector<int>, greater<int> > queue1;

    //push value
    queue1.push(20);
    queue1.push(40);
    queue1.push(30);
    //20,40,30 - In other
    //40,30,20 - In this the numbers will be arranged in Descending Order
    //20,30,40 - In min hiap the numbers will be arranged in Ascending Order
    
    //top
    cout << endl << "Top element :" << queue1.top();


    //pop
    queue1.pop();
    cout << endl << "New Top element :" << queue1.top();

    //size: no of element present in queue
    cout << endl << "No. Of element: " << queue1.size();

    //swap : swap the elements of 2 P.Q
    // pq1.swap(pq2);
    return 0;
}
