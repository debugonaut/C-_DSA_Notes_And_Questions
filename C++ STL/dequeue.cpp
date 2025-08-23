#include <iostream>
#include <deque>
#include <utility> // for std::pair

using std::cin;
using std::cout;
using std::deque;
using std::endl;
using std::pair;

void DequeIntro()
{
    // ====== Declaration and Initialization ======
    deque<int> d0;                   // empty deque
    deque<int> d1(5, 100);           // deque with 5 elements, all = 100
    deque<int> d2 = {1, 2, 3, 4, 5}; // initializer list
    deque<int> d3(d2);               // copy constructor
    deque<pair<int, int>> dpair;     // deque of pairs

    // ====== Basic Insertions ======
    d0.push_back(10);          // insert at end
    d0.push_front(5);          // insert at beginning
    d0.emplace_back(15);       // efficient construction at end
    d0.emplace_front(1);       // efficient construction at beginning
    dpair.emplace_back(2, 50); // insert pair at back

    // Insert at a specific position using iterator
    auto it = d0.begin();
    ++it;             // move iterator to 2nd position
    d0.insert(it, 7); // insert 7 before 2nd element

    // Insert multiple elements
    d0.insert(d0.begin() + 2, 3, 99); // insert three 99s at index 2

    // ====== Deletions ======
    d0.pop_back();  // remove last element
    d0.pop_front(); // remove first element

    // Erase element at iterator position
    it = d0.begin();
    ++it;
    d0.erase(it);

    // Erase a range
    if (d0.size() > 2)
    {
        d0.erase(d0.begin(), d0.begin() + 2);
    }

    // ====== Accessing Front, Back, and Indexing ======
    cout << "Front of d1: " << d1.front() << endl;
    cout << "Back of d1: " << d1.back() << endl;
    cout << "d2[2] (random access): " << d2[2] << endl;
    cout << "d2.at(3): " << d2.at(3) << endl; // bounds-checked

    // ====== Traversal ======
    cout << "d2 elements (range-based for): ";
    for (auto val : d2)
        cout << val << " ";
    cout << endl;

    cout << "d2 elements (iterator): ";
    for (auto itr = d2.begin(); itr != d2.end(); ++itr)
        cout << *itr << " ";
    cout << endl;

    // ====== Size and Capacity ======
    cout << "Size of d1: " << d1.size() << endl;
    cout << "Is d0 empty? " << (d0.empty() ? "Yes" : "No") << endl;

    // Resize
    d2.resize(3); // shrink to 3 elements
    cout << "d2 after resize(3): ";
    for (auto val : d2)
        cout << val << " ";
    cout << endl;

    d2.resize(6, 42); // expand, new elements initialized to 42
    cout << "d2 after resize(6, 42): ";
    for (auto val : d2)
        cout << val << " ";
    cout << endl;

    // ====== Swapping ======
    deque<int> d4 = {10, 20, 30};
    deque<int> d5 = {40, 50};
    d4.swap(d5);
    cout << "d4 after swap: ";
    for (auto val : d4)
        cout << val << " ";
    cout << endl;
    cout << "d5 after swap: ";
    for (auto val : d5)
        cout << val << " ";
    cout << endl;

    // ====== Clearing ======
    d4.clear();
    cout << "Is d4 empty after clear()? " << (d4.empty() ? "Yes" : "No") << endl;
}

int main()
{
    DequeIntro();
    return 0;
}

/*
Sample OUTPUT (may vary due to insert/erase operations):

Front of d1: 100
Back of d1: 100
d2[2] (random access): 3
d2.at(3): 4
d2 elements (range-based for): 1 2 3 4 5
d2 elements (iterator): 1 2 3 4 5
Size of d1: 5
Is d0 empty? No
d2 after resize(3): 1 2 3
d2 after resize(6, 42): 1 2 3 42 42 42
d4 after swap: 40 50
d5 after swap: 10 20 30
Is d4 empty after clear()? Yes
*/
