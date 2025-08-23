#include<iostream>
#include<string>
using namespace std;


void CheckPalindromeRecursion(string s, int n, int i)
{
	if(i>=n/2)
	{
		cout << "Palindrome";
		return;
	}
	if(s[i] != s[n-i-1])
	{
		cout << "Not Palindrome";
		return;
	}
	
	return CheckPalindromeRecursion(s,n,i+1);
}

int main()
{
	string s;
	cout << "Enter the name of your string \n";
	getline(cin, s);
	int n = s.length();
	CheckPalindromeRecursion(s,n, 0);
	
}
