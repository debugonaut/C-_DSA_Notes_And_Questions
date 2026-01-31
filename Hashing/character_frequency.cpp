#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "aadesh";
    int n = s.size();
    unordered_map<char,int> mp;

    for(int i = 0; i<n; i++)
    {
        mp[s[i]]++;
    }

    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}