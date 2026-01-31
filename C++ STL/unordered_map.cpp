#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<string, int> m1;
    m1["Maths"] = 15;
    m1["Physics"] = 21;
    m1["Chemistry"] = 30;

    for (auto &it : m1)
    {
        cout << it.first << " " << it.second << endl;
    }
}