#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  char arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  for(int i = 0; i < n / 2; i++) {
    char temp = arr[i];
    arr[i] = arr[n - 1 - i];
    arr[n - 1 - i] = temp;
  }
  for (int i = 0; i < n; i++) {
    cout << arr[i] << endl;
  }
  return 0;
}