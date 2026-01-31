#include <iostream>
#include<string>
using namespace std;


int main()
{
    string s;
    getline(cin, s);
    int start = 0, end = s.size() - 1;
    while(start <= end && s[start] == ' ')
    {
        start++;
    }
    while(end >= start && s[end] == ' ')
    {
        end--;
    }

    for(int i = start; i <= end; i++)
    {
        cout << s[i];
    }
}