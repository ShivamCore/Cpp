#include <iostream>
#include <thread>
using namespace std;

void threadFunc1(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << "Hello" << endl;
    }
}

void threadFunc2(int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        cout << "Hi" << endl;
    }
}

int main()
{
    clock_t start, end;
    start = clock();

    threadFunc1(1, 25000);
    threadFunc2(25001, 50000);

    end = clock();

    double totaltime = (end - start)/ double(CLOCKS_PER_SEC);
    cout << "Total time taken " << totaltime;
    cout << endl << CLOCKS_PER_SEC;


    return 0;
}



/* clock_t clock(void) returns the number of clock ticks
   elapsed since the program was launched.

   To get the number of seconds used by the CPU,
   we have to divide by CLOCKS_PER_SEC,
   where CLOCKS_PER_SEC is 1000 for my 64 bit  */


   //pass a function to thread
       //thread funcTest1(threadFunc1, 1, 25000);
       //thread funcTest2(threadFunc2, 25001, 50000);
       //funcTest1.join(); // wait for thread to finish
       //funcTest2.join();
