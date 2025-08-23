/*

---------------------------------------------------NEED FOR HASHING-------------------------------------------------------

Imagine an Array of size of 5

Arr[5] = {1,2,3,3,1}

If we were tasked to find out the number of times '1' apprears on the array, we would simply iterate 1 in a for loop
and compare it with each element individually incrementing the counter everytime it matched.

But what if there were multiple numbers to compare like --- compare every number from 1-100 with the array?

It will take a lot of time to execute each comparison and therefore the time complexity would be perpetually increased

That's why hashing has been introduced.

--------------------------------------------------------------------------------------------------------------------------


*/

#include <iostream>
#include <utility>
#include <string>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::string;
int main()
{
    int n;
    cout << "Enter the number of elements you want in your array \n";
    cin >> n;
    int arr[n];
    cout << "Enter the array elements: \n";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // Precomputation of hash
    int hash[50] = {0};

    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    int t;
    cout << "Enter how many queries you would like to search \n";
    cin >> t;
    while (t--)
    {
        int number;
        cout << "Enter the query: \n";
        cin >> number;

        // fetching the hashing number
        cout << "Your number " << number << " is present " << hash[number] << " times " << endl;
    }
}