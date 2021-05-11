#include <iostream>
#include <bits/stdc++.h>
#include <string>
using namespace std;

string reverseWord(string s) {
  reverse(s.begin(), s.end());
  return s;
}

int main() {
  string s;
  cin >> s;
  string res = reverseWord(s);
  cout << res << endl;
  return 0;
}