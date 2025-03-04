#include <iostream>

using namespace std;

int n, m;
int grid[100][100];

bool is_happy(int arr[], int length, int m) {
  if (m <= 1 && length >= 1) return true;

  int count = 1;
  for (int i = 1; i < length; i++) {
    if (arr[i] == arr[i - 1])
      count++;
    else
      count = 1;
    if (count >= m) return true;
  }
  return false;
}
int main() {
  cin >> n >> m;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  int happy_count = 0;
  for (int i = 0; i < n; i++) {
    if (is_happy(grid[i], n, m)) {
      happy_count++;
    }
  }

  for (int j = 0; j < n; j++) {
    int temp[100];

    for (int i = 0; i < n; i++) {
      temp[i] = grid[i][j];
    }
    if (is_happy(temp, n, m)) {
      happy_count++;
    }
  }

  cout << happy_count;

  return 0;
}
