#include <iostream>
#include <string>
using namespace std;

string a;

int main() {
  cin >> a;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '0') {
      a[i] = '1';
      break;
    }
  }

  int max_value = stoi(a, nullptr, 2);

  cout << max_value;
  return 0;
}