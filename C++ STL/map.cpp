#include <iostream>
#include <map> // ✅ include map
using std::cin;
using std::cout;
using std::endl;
using std::map;

// Function to demonstrate map basics
void MapIntro()
{
    // 🔹 Declare a map — stores key-value pairs in sorted order (by key)
    map<int, int> mp;

    // 🔹 Insert values
    mp[1] = 2;         // key=1, value=2
    mp.insert({2, 4}); // key=2, value=4
    mp.emplace(3, 6);  // another way to insert

    // ✅ Map automatically sorts by key
    // So it looks like: {1 → 2, 2 → 4, 3 → 6}

    // 🔹 Access values
    cout << "Value at key 2: " << mp[2] << endl; // prints 4

    // 🔹 If you access a non-existent key, it creates one with value 0
    cout << "Value at key 10 (non-existent): " << mp[10] << endl;
    // map now has key 10 with value 0

    // 🔹 Size of the map
    cout << "Map size: " << mp.size() << endl;

    // 🔹 Check existence
    if (mp.find(3) != mp.end())
        cout << "Key 3 found!\n";
    else
        cout << "Key 3 not found!\n";

    // 🔹 Erase a key
    mp.erase(2); // removes key 2 and its value

    // 🔹 Iterate through all key-value pairs
    cout << "\nCurrent map contents:\n";
    for (auto it : mp)
        cout << it.first << " → " << it.second << endl;

    // 🔹 Clear the map
    mp.clear();

    cout << "\nAfter clearing, map size: " << mp.size() << endl;
}

int main()
{
    MapIntro();
    return 0;
}
