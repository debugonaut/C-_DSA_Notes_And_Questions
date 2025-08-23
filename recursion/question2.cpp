#include <iostream>
#include <utility>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::string;

void PrintTillNRecurion(int i, int n)
{
    if (i == n + 1)
    {
        return;
    }
    else
    {
        cout << i << endl;
    }
    i++;
    PrintTillNRecurion(i, n);
}
int main()
{
    int n;
    cout << "Enter the number till you want to print \n";
    cin >> n;
    PrintTillNRecurion(1, n);
}