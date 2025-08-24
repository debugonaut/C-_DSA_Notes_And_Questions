#include <iostream>
#include <set>
using std::cin;
using std::cout;
using std::endl;
using std::multiset;
using std::set;
// Set contains any element (int,char,string) in a sorted manner and every element is stores uniquely
void Set()
{
    set<int> st;

    st.insert(1);  // {1}
    st.emplace(2); // {1,2}
    st.insert(2);  // {1,2}
    st.insert(4);  // {1,2,4}
    st.insert(3);  // {1,2,3,4}

    // {1,2,3,4}
    auto it = st.find(3); // Points to the memory address of 3

    auto it = st.find(6); // Here 6 is not present in the set so the iterator will return st.end() + 1 memory address,

    st.erase(5); // erases 5 from the set;
}

void SetEraser()
{
    set<int> st2;

    st2.insert(1);
    st2.emplace(2);
    st2.insert(3);
    st2.insert(4);
    st2.insert(5);

    auto it1 = st2.find(2);
    auto it2 = st2.find(4);
    st2.erase(it1, it2); // after erase {1,4,5} [first, last-1] erases
}

void Multiset() // Can store duplicate and sorted elements inside
{
    multiset<int> ms1;
    ms1.insert(1);
    ms1.insert(1);
    ms1.insert(2); // {1,1,2}

    ms1.erase(1); // all 1's are erased

    int cnt = ms1.count(1); // 0

    ms1.erase(ms1.find(1)); // Only the 1 present at that memory address is deleted
}
int main()
{
    Set();
    SetEraser();
    Multiset();
    return 0;
}