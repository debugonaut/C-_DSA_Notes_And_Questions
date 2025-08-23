#include <iostream>
#include <queue>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::greater;
using std::priority_queue;
using std::vector;

int Priority_Queue()
{ // Ascending Order

    priority_queue<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {5,2}
    pq.push(7); // {7,5,2}
    pq.push(1); // {7,5,2,1} Here priority is given to the largest element

    pq.pop(); // {5,2,1}

    pq.top(); // {5}

    // Descending Order

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); // {5}
    pq.push(2); // {2,5}
    pq.push(6); // {2,5,6}
    pq.push(1); // {1,2,5,6}
}

int main()
{
    Priority_Queue();
    return 0;
}