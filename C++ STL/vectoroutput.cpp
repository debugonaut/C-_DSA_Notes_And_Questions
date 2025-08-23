#include <iostream>
#include <utility>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::iterator;
using std::pair;
using std::vector;

void VectorOutputFromBegin()
{
    cout << "Printing OUTPUT by using begin \n";
    vector<int> v0 = {5, 6, 7, 8}; // Storing multiple values in a vector variable v0

    vector<int>::iterator iter = v0.begin(); // Begin starts from the 0th index so here '5'

    cout << *(iter) << " " << endl; // '*' is used because the iter contains memory address of the value stored

    iter++;
    cout << *(iter) << " " << endl;

    iter += 2;
    cout << *(iter) << " " << endl;
}

void VectorOutputFromEnd()
{
    cout << "Printing OUTPUT by using end \n";
    vector<int> v1 = {10, 20, 30, 40, 50};

    vector<int>::iterator iter2 = v1.end(); // End starts from the (last + 1) index

    iter2--; // Always decrement the last value as it actually stores the (last + 1) index
    cout << *(iter2) << " " << endl;

    iter2 -= 2;
    cout << *(iter2) << " " << endl;
}

void VectorOutputAll()
{
    cout << "Printing OUTPUT all together \n";
    vector<int> v2 = {5, 10, 15, 20, 25, 30, 35};

    vector<int>::iterator iter3 = v2.begin();
    for (auto iter3 : v2)
    {
        cout << (iter3) << endl;
    }
}
int main()
{

    VectorOutputFromBegin();
    VectorOutputFromEnd();
    VectorOutputAll();
    return 0;
}