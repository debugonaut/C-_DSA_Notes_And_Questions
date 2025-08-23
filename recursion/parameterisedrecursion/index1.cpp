#include<iostream>
#include<utility>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::pair;

void SumOfNNumbers(int i,int sum)
{
    if(i<0)
    {
        cout << sum;
        return;
    }
    SumOfNNumbers(i-1, sum+i); // using a parameter we executed our operation

}
int main()
{
    int n;
    cout << "Enter your number \n";
    cin >> n;
    SumOfNNumbers(n,0);
}