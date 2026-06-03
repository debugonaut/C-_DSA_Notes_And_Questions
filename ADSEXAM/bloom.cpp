#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int h1(string s, int arrSize)
{
    int hash = 0;

    for(int i = 0; i < s.size(); i++)
    {
        hash = hash + int(s[i]);
        hash = hash % arrSize;
    }

    return hash;
}

int h2(string s, int arrSize)
{
    int hash = 1;

    for(int i = 0; i < s.size(); i++)
    {
        hash = hash + (i * int(s[i]));
        hash = hash % arrSize;
    }

    return hash;
}

int h3(string s, int arrSize)
{
    int hash = 2;

    for(int i = 0; i < s.size(); i++)
    {
        hash = hash + pow(19, i);
        hash = hash % arrSize;
    }

    return hash;
}

void insert(int bfilter[10], string url, int arrSize)
{
    int a = h1(url, arrSize);
    int b = h2(url, arrSize);
    int c = h3(url, arrSize);

    if(bfilter[a] == 1 && bfilter[b] == 1 && bfilter[c] == 1)
    {
        cout << "\nurl is Probably Present!";
    }
    else
    {
        bfilter[a] = 1;
        bfilter[b] = 1;
        bfilter[c] = 1;

        cout << "\n" << url << " inserted successfully!";
    }
}

void display(int bfilter[10], int arrSize)
{
    cout << "\nBloom Filter : ";

    for(int i = 0; i < arrSize; i++)
    {
        cout << bfilter[i] << " ";
    }

    cout << endl;
}

int main()
{
    int bfilter[10];
    string url;
    int choice;

    for(int i = 0; i < 10; i++)
    {
        bfilter[i] = 0;
    }

    do
    {
        cout << "\nEnter url : ";
        cin >> url;

        insert(bfilter, url, 10);

        display(bfilter, 10);

        cout << "\nInsert another url? (1/0) : ";
        cin >> choice;

    } while(choice != 0);

    return 0;
}