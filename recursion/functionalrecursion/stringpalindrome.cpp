 #include<iostream>
 #include<utility>
 #include<string>
 #include<vector>
 using std::cout;
 using std::cin;
 using std::endl;
 using std::string;
 using std::pair;
 using std::swap;
 string s;
 string b;
 void StringPalindrome(string s,int i,int n)
 {
    if(i==n/2)
    {
        if(b==s)
        {
            cout << "Palindrome";
        }
        else 
        cout << "Not Palindrome";
        return;
    }
    swap(s[i], s[n-i-1]);
    StringPalindrome(s,i+1,n);
 }
 int main()
 {
    
    cout << "Enter your string text: \n";
    getline(cin, s);
    b = s;
    int n = s.length();
    StringPalindrome(s,0,n);
    
 }