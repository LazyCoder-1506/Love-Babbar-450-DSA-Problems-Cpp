#include <iostream>
#include <bits/stdc++.h>
using namespace std;

struct Pair {
  int min;
  int max;
};

struct Pair getMinMax(int arr[], int n, int k) {
  sort(arr, arr + n);
  Pair res = {arr[k - 1], arr[n - k]};
  return res;
}

int main() {
  int n, k;
  cin >> n >> k;
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  Pair res = getMinMax(arr, n, k);
  cout << "Minimum : " << res.min << endl;
  cout << "Maximum : " << res.max << endl;
  return 0;
}