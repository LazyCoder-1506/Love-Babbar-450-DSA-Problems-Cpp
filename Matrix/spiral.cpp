#include <iostream>
using namespace std;

int main() {
  int r, c;
  cin >> r >> c;
  int matrix[r][c];
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> matrix[i][j];
    }
  }

  int t = r * c;
  int cnt = 0, flag = 0;
  while (flag == 0) {
    for (int a = cnt; a < c - 1 - cnt; a++) {
      if (t > 0) {
        t--;
        cout << matrix[cnt][a] << " ";
      }
      else {
        flag = 1;
      }
    }
    for (int a = cnt; a < r - 1 - cnt; a++) {
      if (t > 0) {
        t--;
        cout << matrix[a][c - 1 - cnt] << " ";
      }
      else {
        flag = 1;
      }
    }
    for (int a = c - 1 - cnt; a > cnt; a--) {
      if (t > 0) {
        t--;
        cout << matrix[r - 1 - cnt][a] << " ";
      }
      else {
        flag = 1;
      }
    }
    for (int a = r - 1 - cnt; a > cnt; a--) {
      if (t > 0) {
        t--;
        cout << matrix[a][cnt] << " ";
      }
      else {
        flag = 1;
      }
    }
    cnt++;
  }
  cout << endl;
  return 0;
}