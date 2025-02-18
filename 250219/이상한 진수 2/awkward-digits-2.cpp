#include <iostream>
#include <string>
using namespace std;

string a;
bool changed = false;
int main() {
  cin >> a;

  for (int i = 0; i < a.size(); i++) {
    if (a[i] == '0') {
      a[i] = '1';
      changed = true;
      break;
    }
  }

  int max_value = stoi(a, nullptr, 2);
  if (!changed) {
    max_value -= 1;
  }

  cout << max_value;
}