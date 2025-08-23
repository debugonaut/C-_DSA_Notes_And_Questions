#include <iostream>
#include <list>
#include <utility> // for std::pair

using std::cin;
using std::cout;
using std::endl;
using std::list;
using std::pair;

void ListsIntro()
{
    // ====== Declaration and Initialization ======
    list<int> l0;                   // empty list
    list<int> l1(5, 100);           // list with 5 elements, all = 100
    list<int> l2 = {1, 2, 3, 4, 5}; // initializer list
    list<int> l3(l2);               // copy constructor
    list<pair<int, int>> lpair;     // list of pairs

    // ====== Basic Insertions ======
    l0.push_back(10);          // insert at end
    l0.push_front(5);          // insert at beginning
    l0.emplace_back(15);       // efficient construction at end
    l0.emplace_front(1);       // efficient construction at beginning
    lpair.emplace_back(2, 50); // insert pair

    // Insert at a specific position using iterator
    auto it = l0.begin();
    ++it;             // move iterator to 2nd position
    l0.insert(it, 7); // insert 7 before 2nd element

    // ====== Deletions ======
    l0.pop_back();  // remove last element
    l0.pop_front(); // remove first element

    // Erase element at iterator position
    it = l0.begin();
    ++it;
    l0.erase(it);

    // Remove by value (removes *all* 7s)
    l0.remove(7);

    // ====== Accessing Front and Back ======
    cout << "Front of l1: " << l1.front() << endl;
    cout << "Back of l1: " << l1.back() << endl;

    // ====== Traversal ======
    cout << "l2 elements (range-based for): ";
    for (auto val : l2)
        cout << val << " ";
    cout << endl;

    cout << "l2 elements (iterator): ";
    for (auto itr = l2.begin(); itr != l2.end(); ++itr)
        cout << *itr << " ";
    cout << endl;

    // ====== List-specific Operations ======
    list<int> l4 = {9, 1, 5, 3, 7};
    l4.sort(); // sort in ascending order
    cout << "l4 after sort: ";
    for (auto val : l4)
        cout << val << " ";
    cout << endl;

    l4.reverse(); // reverse order
    cout << "l4 after reverse: ";
    for (auto val : l4)
        cout << val << " ";
    cout << endl;

    list<int> l5 = {1, 2, 2, 3, 3, 4};
    l5.unique(); // removes consecutive duplicates
    cout << "l5 after unique: ";
    for (auto val : l5)
        cout << val << " ";
    cout << endl;

    list<int> l6 = {10, 20, 30};
    list<int> l7 = {15, 25, 35};
    l6.merge(l7); // both should be sorted; merges into l6
    cout << "l6 after merge: ";
    for (auto val : l6)
        cout << val << " ";
    cout << endl;

    // ====== Size and Empty Check ======
    cout << "Size of l6: " << l6.size() << endl;
    cout << "Is l7 empty? " << (l7.empty() ? "Yes" : "No") << endl;
}

int main()
{
    ListsIntro();
    return 0;
}

/*
Sample OUTPUT (may vary due to order of operations):

Front of l1: 100
Back of l1: 100
l2 elements (range-based for): 1 2 3 4 5
l2 elements (iterator): 1 2 3 4 5
l4 after sort: 1 3 5 7 9
l4 after reverse: 9 7 5 3 1
l5 after unique: 1 2 3 4
l6 after merge: 10 15 20 25 30 35
Size of l6: 6
Is l7 empty? Yes
*/
