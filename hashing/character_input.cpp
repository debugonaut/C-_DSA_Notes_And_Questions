#include <iostream>
#include <vector>
#include<unordered_map>
#include<string>
using namespace std;

int main()
{
    unordered_map<char,int> mp;
    string s;
    cin >> s;
    for(auto it : s) {
        if(it == 'a' || it == 'e' || it == 'i' || it == 'o' || it == 'u' || it == 'A' || it == 'E' || it == 'I' || it == 'O' || it == 'U')
        {
            mp[it]++;
        }
    }
    for(auto it : mp) {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}