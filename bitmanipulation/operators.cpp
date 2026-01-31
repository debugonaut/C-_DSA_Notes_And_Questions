#include <iostream>
#include <vector>
using namespace std;

void AND(int num1 , int num2){
    cout << (num1&num2) << endl;
}
void OR(int num1 , int num2){
    cout << (num1|num2) << endl;
}
void NOT(int num1 , int num2){
    cout << (~num2) << endl;
}
void SHIFT(int num1 , int num2){
    cout << "Right Shift = " << (num1<<num2) << endl;
    cout << "Left Shift = " << (num1>>num2) << endl;
}
void X_OR(int num1 , int num2){   
    cout << (num1^num2) << endl; 
}

int main()
{
    int n1 , n2;
    cin >> n1 >> n2;
    int choice;
    while(cin >> choice)
    {
        switch(choice) {
            case 1: AND(n1 , n2); break;
            case 2: OR(n1 , n2); break;
            case 3: NOT(n1 , n2); break;
            case 4: SHIFT(n1 , n2); break;
            case 5: X_OR(n1 , n2); break;
            case 6 : cout << "Exiting..."; return 0;
        }
    }
    return 0;
}