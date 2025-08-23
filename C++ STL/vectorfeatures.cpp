#include <iostream>
#include <utility>
#include <vector>
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;
void VectorErase()
{
    vector<int> vec1 = {1, 2, 3, 4, 5};

    // {1,2,3,4,5}
    vec1.erase(vec1.begin() + 1); // {1,3,4,5}

    vector<int>::iterator iter1 = vec1.begin();
    for (auto iter1 : vec1)
    {
        cout << iter1 << endl;
    }
    cout << endl;
    /*
    OUTPUT
    1
    3
    4
    5
    */

    // Delete multiple values

    vec1.erase(vec1.begin(), vec1.begin() + 1); // {3,4,5}
    vector<int>::iterator iter2 = vec1.begin();
    for (auto iter2 : vec1)
    {
        cout << iter2 << endl;
    }
    cout << endl;
    /*OUTPUT
    3
    4
    5
    */
}

void VectorInsert()
{
    vector<int> vec2 = {100, 200, 300, 400, 500};

    // Insert Single Number

    vec2.insert(vec2.end(), 900); // {100, 200, 300, 400, 500, 900}
    vector<int>::iterator iter3 = vec2.begin();
    for (auto iter3 : vec2)
    {
        cout << iter3 << endl;
    }
    cout << endl;

    // Insert Multiple Numbers

    vector<int> vec3 = {100, 200, 300, 400, 500};
    vec3.insert(vec3.begin() + 1, 2, 900);

    // {100,900,900,200,300,400,500}

    vector<int>::iterator iter4 = vec3.begin();

    for (auto iter4 : vec3)
    {
        cout << iter4 << endl;
    }
}
void VectorCopy()
{
    vector<int> vec4 = {120,240,360,480,600};
    vector<int> copy(3,399);
    vec4.insert(vec4.begin(), copy.begin(), copy.end()); // {399,399,399,120,240,360,480,600}
    vector<int>::iterator iter4 = vec4.begin();
    for(auto iter5 : vec4)
    {
        cout << iter5 << endl;
    }
}
int main()
{
    //VectorErase();
    //VectorInsert();
    VectorCopy();
    return 0;
}