#include <iostream>
#include <set>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::set;
using std::vector;
int main()
{

    int n1, n2;
    cout << "Enter the number of elements you want in your first array \n";
    cin >> n1;

    int arr[n1];
    cout << "Enter your array elements \n";

    for (int i = 0; i < n1; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the number of elements you want in your second array \n";
    cin >> n2;

    int arr2[n2];
    cout << "Enter your array elements \n";

    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }

    set<int> st;

    for (int i = 0; i < n1; i++)
    {
        st.insert(arr[i]);
    }

    for (int i = 0; i < n2; i++)
    {
        st.insert(arr2[i]);
    }

    vector<int> temp;
    for (auto it : st)
    {
        temp.push_back(it);
    }

    for (int i = 0; i < temp.size(); i++)
    {
        cout << temp[i];
    }
    return 0;
}