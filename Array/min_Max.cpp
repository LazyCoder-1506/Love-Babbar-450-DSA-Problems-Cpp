#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n) {
  sort(arr, arr + n);
  Pair res = {arr[0], arr[n - 1]};
  return res;
}

int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  Pair res = getMinMax(arr, n);
  cout << "Minimum : " << res.min << endl;
  cout << "Maximum : " << res.max << endl;
  return 0;
}