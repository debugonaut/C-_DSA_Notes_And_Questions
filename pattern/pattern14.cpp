#include <iostream>
using std::cin;
using std::cout;
using std::endl;
void AlphabetTriangle(int n)
{
    char c;
    for (int i = 0; i < n; i++)
    {
        c = 65;
        for (int j = 0; j <= i; j++)
        {

            cout << c << "";
            c++;
        }
        cout << endl;
    }
}
int main()
{
    int n;
    cout << "Enter the number of lines you want in your Alphabet Triangle \n";
    cin >> n;
    AlphabetTriangle(n);
    return 0;
}
