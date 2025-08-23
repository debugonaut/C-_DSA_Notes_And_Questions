#include <iostream>
#include<string>
#include <utility> // required for pair function
using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::pair; // required for pair function
void PairsIntro()
{
    // Defining and accessing a pair
    pair<float, string> P = {1.9, "Aadesh"};
    cout << P.first << " " << P.second << endl;

    // Defining and accessing multiple pairs
    pair<int, pair<int, pair<int, int>>> D = {5, {6, {9, 4}}};
    cout << D.first << " " << D.second.second.first << endl;

    // Defining and accessing array pairs
    pair<int, int> arr[] = {{3, 4}, {1, 2}};
    cout << arr[0].first;
}
int main()
{
    PairsIntro();
    return 0;
}