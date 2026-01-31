#include <iostream>
#include <vector>
#include <iomanip>
#include <cmath>
using namespace std;

void Linear_search(vector<int> array)
{
    int search_element;
    cin >> search_element;
    for(int i = 0; i<array.size(); i++)
    {
        if(array[i] == search_element)
        {
            cout << "Found at index : " << i << endl;
            return;
        }
    }
    cout << "Not found \n";
}
void Binary_Search(vector<int> array)
{
    int key;
    cin >> key;
    int low = 0, high = array.size() - 1, mid = (low + high) / 2;
    while(low <= high)
    {
        if(array[mid] == key)
        {
            cout << "Found at location : " << mid;
            return;
        }
        else if(array[mid] > key)
        {
            high = mid - 1;
            mid = (low + high) / 2;
        }
        else if(array[mid] < key)
        {
            low = mid + 1;
            mid = (low + high) / 2;
        }
        else
        {
            cout << "Not found \n";
        }
    }
}
vector<int> Sort(vector<int> array )
{
    for(int i = 0; i<array.size() - 1; i++)
    {
        for(int j = 0; j< array.size() - i - 1; j++)
        {
            if(array[j] > array[j + 1])
            {
                swap(array[j] , array[j+1]);
            }
        }
    }
    return array;
}
vector<int> Add_student(vector<int> array) {
    int num;
    while(cin >> num)
    array.push_back(num);
    return array;
}

vector<int> Remove_student(vector<int> array) {
    int index;
    while(cin >> index)
    if (index >= array.size() || index < 0) {
        cout << "Not a valid index \n";
        return array;
    }
    array.erase(array.begin() + index);
    return array;
}

int Addition(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i];
    }
    return sum;
}

void Display(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << endl;
    }
}

float Average(const vector<int>& arr, int sum) {
    if (arr.size() == 0)
        return 0.0f;
    return (float)sum / arr.size();
}

int Highest(vector<int> arr) {
    int maxi = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        maxi = max(arr[i], maxi);
    }
    return maxi;
}

int Lowest(vector<int> arr) {
    int mini = arr[0];
    for (int i = 0; i < arr.size(); i++) {
        mini = min(arr[i], mini);
    }
    return mini;
}

int main() {
    int n, sum;
    float average;
    cin >> n;
    vector<int> array(n);
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int choice;
    while (cin >> choice) {
        switch (choice) {
            case 1:
                sum = Addition(array);  
                cout << sum << endl;
                break;
            case 2:
                Display(array);
                break;
            case 3:
                sum = Addition(array);
                average = Average(array, sum);
                cout << fixed << setprecision(2) << average << endl;
                break;
            case 4:
                cout << Highest(array) << endl;
                break;
            case 5:
                cout << Lowest(array); 
                break;
            case 6:
                array = Add_student(array);
                break;
            case 7:
                array = Remove_student(array);
                break;
            case 8: Linear_search(array);
                break;
            case 9: array = Sort(array);
                break;
            case 10: array = Sort(array);
                     Binary_Search(array);
                     break;
            case 11:
                cout << "Exiting ...";
                return 0;
                break;
            default:
                cout << "Invalid choice\n";
        }
    }

    return 0;
}
