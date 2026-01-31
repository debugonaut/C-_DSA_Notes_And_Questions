#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
using namespace std;

int main()
{
    string s = "aadesh", t = "ujesh";
    unordered_map<char,char> mp;

    for(int i = 0; i<s.size(); i++)
    {
        if(mp.count(s[i])){
            if(s[i] != t[i])
            {
                cout << "Invalid mapping";
                return 0;
            }
            
        }
        else{
            mp[s[i]] = t[i];
        }
        
    }
    cout << "Valid mapping";

    return 0;
}