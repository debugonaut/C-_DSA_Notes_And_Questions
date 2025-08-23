#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
int main()
{
    string input;
    cout << "Enter your line \n";
    getline(cin, input);
    cout << input;

    return 0;
}