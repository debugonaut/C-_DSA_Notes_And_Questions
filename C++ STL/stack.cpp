#include <iostream>
#include <stack>
using std::cin;
using std::cout;
using std::endl;
using std::stack;

void StackIntro()
{
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.push(5); // {5,4,3,2,1}

    st.emplace(10); // {10,5,4,3,2,1} Add the number to the top

    cout << st.top(); // prints 10

    // --------------------CAUTION----------------------------
    // |                                                     |
    // |                                                     |
    // |   INDEXING IS NOT ALLOWED IN STACK                  |

    cout << st.size();
    cout << st.empty(); // check whether the stack is empty or not

    stack<int> st1, st2;
    st1.swap(st2); // swaps both the stacks
}
int main()
{
    StackIntro();
    return 0;
}