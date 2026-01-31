// #include <iostream>
// #include <vector>
// #include <unordered_map>
// using namespace std;

// int main()
// {   
//     int n, key;
//     unordered_map<int, int> mp;
//     cin >> n;

//     for(int i = 0; i<n; i++)
//     {
//         cin >> key;
//         mp[key]++;
//     }
    
//     for(auto it : mp)
//     {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }



#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main()
{   
    int n, key;
    map<int, int> mp;
    cin >> n;
    for(int i = 0; i<n; i++)
    {
        cin >> key;
        mp[key]++;
    }
    
    for(auto it : mp)
    {
        cout << it.first << " " << it.second << endl;
    }
    
    return 0;
}
