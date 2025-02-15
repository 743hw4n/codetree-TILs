#include <iostream>
using namespace std;

int main() {
  int count_pair = 0;
  string A;
  cin >> A;

  for (int i = 0; i < A.size(); i++) {
    if (A[i] == '(') {
      for (int j = i + 1; j < A.size(); j++) {
        if (A[j] == ')') {
          count_pair++;
        }
      }
    }
  }

  cout << count_pair;
  return 0;
}