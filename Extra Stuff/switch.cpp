#include <iostream>
#include <fstream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num, num2, operation;
    cout << "Enter the first and second number \n";
    cin >> num >> num2;

    cout << "Enter the Arithmetic Operation by your preference\n1: Addition\n2: Subtraction\n3: Multiplicaiton \n4: Division \n5: Remainder\n";
    cin >> operation;
    switch (operation)
    {
    case 1:
        cout << " " << num + num2;
        break;
    case 2:
        cout << " " << num - num2;
        break;
    case 3:
        cout << " " << num * num2;
        break;
    case 4:
        cout << " " << num / num2;
        break;
    case 5:
        cout << " " << num % num2;
        break;
    }
}
