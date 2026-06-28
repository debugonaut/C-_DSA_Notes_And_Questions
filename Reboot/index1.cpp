
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> arr(n);
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  bool isSorted = true;
  for (int i = 0; i < n; i++) {
  }

  if (isSorted)
    cout << "Sorted";

  return 0;
}