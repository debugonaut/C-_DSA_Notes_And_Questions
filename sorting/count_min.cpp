#include<iostream>
using namespace std;

int h1(int x, int size)
{
    return x % size;
}

int h2(int x, int size)
{
    return (x / size) % size;
}

int h3(int x, int size)
{
    return (x * 7) % size;
}

void insert(int cms[3][10], int num)
{
    cms[0][h1(num,10)]++;
    cms[1][h2(num,10)]++;
    cms[2][h3(num,10)]++;

    cout << "\nNumber inserted!";
}

void frequency(int cms[3][10], int num)
{
    int a = cms[0][h1(num,10)];
    int b = cms[1][h2(num,10)];
    int c = cms[2][h3(num,10)];

    int min = a;

    if(b < min)
        min = b;

    if(c < min)
        min = c;

    cout << "\nEstimated Frequency of " << num << " = " << min;
}

void display(int cms[3][10])
{
    cout << "\nCount-Min Sketch Table\n";

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            cout << cms[i][j] << " ";
        }

        cout << endl;
    }
}

int main()
{
    int cms[3][10] = {0};
    int num, choice;

    do
    {
        cout << "\nEnter number : ";
        cin >> num;

        insert(cms, num);

        frequency(cms, num);

        display(cms);

        cout << "\nInsert another number? (1/0) : ";
        cin >> choice;

    } while(choice != 0);

    return 0;
}