#include <iostream>
#include <thread>
using namespace std;

int main()
{
    // [] arg -> return_type { definition };
    thread t1([] {std::cout << "Vedinesh"; });
    thread t2([] {std::cout << " Academy"; });

    t1.join();
    t2.join();

    return 0;
}
