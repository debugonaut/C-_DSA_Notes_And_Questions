#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

void infiniterecursion()
{
    cout << "Hello\n";
    infiniterecursion();
}
int main()
{
    infiniterecursion();
}

/*
Hello
Hello
Hello
Hello
Hello
Hello
.. till infinity*/
