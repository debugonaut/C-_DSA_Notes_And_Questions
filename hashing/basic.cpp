#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{
    map<int, int> mp;
    mp[1] = 10;
    mp[2] = 20; 
    cout << mp[1] << " " << mp[2];
    mp[3] = 5;
    mp[3]++;
    cout << " " << mp[3] << endl;
    if(mp.find(7) != mp.end()) {
        cout << "Found \n";
    }
    else {
        cout << "Not found \n";
    }
    for(auto it: mp) {
        cout << it.first << " " <<it.second << " ";
    }
    return 0;
}