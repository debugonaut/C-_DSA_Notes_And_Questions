#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;

bool isPalindrome(string input)
{
    int left = 0;
    int right = input.length() - 1;

    while (left < right)
    {
        if (input[left] != input[right])
        {
            return false; // Characters don't match
        }
        left++;
        right--;
    }
    return true; // All characters matched
}

int main()
{
    string input;
    cout << "Enter your line:\n";
    getline(cin, input); // Reads full line with spaces

    if (isPalindrome(input))
    {
        cout << "Palindrome\n";
    }
    else
    {
        cout << "Not Palindrome\n";
    }

    return 0;
}
