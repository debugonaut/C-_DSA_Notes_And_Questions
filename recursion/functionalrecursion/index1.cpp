#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

int FunctionalRecursion(int n)
{
    // f(n)
    // {
    //    if(n==0) return 0;
    //    else return n + f(n-1);
    // }

    if(n == 0)
    {
        // f(0)
        // {
        //    if(n==0) ✅ return 0
        // }
        return 0;
    }

    // Visualizing the recursive flow:
    // Example: n = 3
    // f(3) → 3 + f(2)
    //            f(2) → 2 + f(1)
    //                       f(1) → 1 + f(0)
    //                                  f(0) → 0
    // Stack unwinds: 1 → 3 → 6

    return n + FunctionalRecursion(n-1);
}

int main()
{
    int n;
    cout << "Enter your number\n";
    cin >> n;

    // Example trace if n = 3
    // ┌───────────────┐
    // │ f(3)          │
    // │   3 + f(2)    │
    // │        2 + f(1)  
    // │             1 + f(0)
    // │                  0
    // │ Sum = 6
    // └───────────────┘

    cout << FunctionalRecursion(n);
}
