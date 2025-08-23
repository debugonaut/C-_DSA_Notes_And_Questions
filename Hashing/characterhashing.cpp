#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    cout << "Enter your string \n";
    getline(cin, s);
    int n = s.length();
    int hash[50] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[s[i]] += 1;
    }
    int t;
    cout << "Enter the number of queries you want \n";
    cin >> t;
    while (t--)
    {
        char c;
        cout << "Enter the query \n";
        cin >> c;

        cout << "Your character appears " << hash[c] << " times ";
    }
}
