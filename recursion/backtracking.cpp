#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

void BacktrackingNto1(int i, int n)
{
    if(i<1)
    {
        return;
    }
    BacktrackingNto1(i-1,n);
    cout << i << " "; // Printing after recursion means:

    /* Backtracking (4,5) -> Backtracking (3,5) -> Backtracking (2,5) -> Backtracking (1,5) != Backtracking (0,5)
        Now the function will return Backtracking (1,5) and print 1 
        
    */
}

int main()
{
    int n;
    cout << "Enter your number \n";
    cin >> n;
    BacktrackingNto1(n,n);
}