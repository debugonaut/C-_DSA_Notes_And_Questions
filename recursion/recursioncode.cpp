#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

void recursionIntro(int a)
{
    
    cout << a << endl;
    a++;

    if(a==5)
    {
        return; // Use return statement to stop the recursion process.
    }
    else
    {
        recursionIntro(a);
    }
}
int main()
{
    recursionIntro(1);
}