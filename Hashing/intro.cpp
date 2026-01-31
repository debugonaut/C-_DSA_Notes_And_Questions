#include<iostream>
#include<unordered_map> // To get the map library
using namespace std;

int main()
{
    unordered_map<int, int> mp;
    mp[10] = 1; // maps the value 10 to 1
    mp[20] = 2; // maps the value 20 to 2
    mp[30] = 3; // maps the value 30 to 3

    for(auto it : mp)
    {
        cout << it.first << " mapped to " << it.second << endl;
    }

}