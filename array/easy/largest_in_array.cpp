#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int Brute_Force_Solution(int n, int arr[])
{
  int max = 0;
  for (int i = 0; i < n; i++)
  {
    if (max < arr[i])
    {
      max = arr[i];
    }
  }
  return max;
}
int Better_Solution(int n, int arr[])
{
  // Same as Brute Force
}
int Optimal_Solution(int n, int arr[])
{
  // Same as Brute Force
}

int main()
{
  int n;
  cout << "Enter the number of elements you want in your array \n";
  cin >> n;

  int arr[n];
  cout << "Enter your array elements \n";
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }

  int result = Brute_Force_Solution(n, arr);
  int result1 = Better_Solution(n, arr);
  int result2 = Optimal_Solution(n, arr);

  cout << "Result from Brute Force : " << result << endl;

  return 0;
}
