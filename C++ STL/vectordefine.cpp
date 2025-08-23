#include <iostream>
#include <vector>
#include <utility>

// Import specific names from the standard namespace to avoid using std:: prefix repeatedly
using std::cin;
using std::cout;
using std::endl;
using std::pair;
using std::vector;

void VectorsIntro()
{
    // Declare an empty vector of integers named v0
    vector<int> v0;

    // Add number 1 to the end of vector v0 using push_back
    v0.push_back(1);

    // Add number 2 to the end of vector v0 using emplace_back (slightly more efficient)
    v0.emplace_back(2);

    // Declare a vector of pairs of integers named vec
    vector<pair<int, int>> vec;

    // Insert a pair (1, 2) into the vec vector using push_back with initializer list
    vec.push_back({1, 2});

    // Insert a pair (5, 100) into vec using emplace_back (constructs the pair in-place)
    vec.emplace_back(5, 100);

    // Create a vector v1 with 5 elements, each initialized to the value 100
    vector<int> v1(5, 100);

    // Create a vector v2 with 5 elements, all default-initialized to 0 (for integers)
    vector<int> v2(5);
    v2.push_back(15);
    v2.emplace_back(14);
    v2.push_back(13);

    // Create a vector v3 with 5 elements, each initialized to the value 20
    vector<int> v3(5, 20);

    // Create a new vector v4 that is a copy of vector v3
    vector<int> v4(v3);
}

// Main function – starting point of program execution
int main()
{
    // Call the function that demonstrates vector operations
    VectorsIntro();

    // Indicate successful program termination
    return 0;
}

/*
OUTPUT

v1: 100 100 100 100 100
v2: 0 0 0 0 0 15 14 13
v3: 20 20 20 20 20
v4 (copy of v3): 20 20 20 20 20

*/