#include <iostream>
#include <queue>
using std::cin;
using std::cout;
using std::endl;
using std::queue;

// Queue works on the concept of FIFO (First In First Out)

void Queue()
{
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.push(3); // {1,2,3}

    cout << q.back();  // {3}
    cout << q.front(); // {1}

    q.pop(); // {2,3}
}
int main()
{
    Queue();
    return 0;
}