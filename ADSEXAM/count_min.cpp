#include <iostream>

using namespace std;

#define ROW 2
#define COL 10

// Count-Min Sketch Table
int cms[ROW][COL] = {0};

// Hash Function 1
int hash1(int key) {

    return key % COL;
}

// Hash Function 2
int hash2(int key) {

    return (key / 7) % COL;
}

// Insert element
void insert(int key) {

    cms[0][hash1(key)]++;
    cms[1][hash2(key)]++;
}

// Estimate frequency
int getCount(int key) {

    int a = cms[0][hash1(key)];
    int b = cms[1][hash2(key)];

    // Return minimum count
    return min(a, b);
}

// Print CMS table
void printTable() {

    cout << "\nCount-Min Sketch Table:\n";

    for(int i = 0; i < ROW; i++) {

        for(int j = 0; j < COL; j++) {

            cout << cms[i][j] << " ";
        }

        cout << endl;
    }
}

int main() {

    int n;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";

    // Insert stream elements
    for(int i = 0; i < n; i++) {

        int x;
        cin >> x;

        insert(x);
    }

    printTable();

    int key;

    cout << "\nEnter element to check frequency: ";
    cin >> key;

    cout << "Estimated Frequency = "
         << getCount(key);

    return 0;
}

/*

PSEUDOCODE ALGORITHM

------------------------------------------------
Algorithm Hash1(key)

1. Return key % COL

------------------------------------------------
Algorithm Hash2(key)

1. Return (key / 7) % COL

------------------------------------------------
Algorithm Insert(key)

1. Find index using Hash1

2. Increment cms[0][index]

3. Find index using Hash2

4. Increment cms[1][index]

------------------------------------------------
Algorithm GetCount(key)

1. a = cms[0][Hash1(key)]

2. b = cms[1][Hash2(key)]

3. Return minimum(a, b)

------------------------------------------------
Algorithm PrintTable()

1. For each row i

       For each column j

            Print cms[i][j]

2. Move to next line after each row

------------------------------------------------
Algorithm Main()

1. Input number of elements n

2. Repeat n times

       Input element x

       Insert(x)

3. Print CMS Table

4. Input key

5. Print estimated frequency
   using GetCount(key)

------------------------------------------------
Time Complexity

Insertion:
O(1)

Frequency Query:
O(1)

Space Complexity:
O(ROW × COL)

------------------------------------------------
Important Viva Points

1. Count-Min Sketch is a probabilistic
   data structure.

2. It is used for frequency estimation
   in data streams.

3. It may overestimate frequency
   because of collisions.

4. It never underestimates frequency.

5. Space efficient compared to
   storing exact frequencies.

*/