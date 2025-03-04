#include <iostream>
using namespace std;

int N;
int grid[20][20];

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> grid[i][j];
    }
  }

  int max_coins = 0;

  for (int r = 0; r <= N - 3; r++) {
    for (int c = 0; c <= N - 3; c++) {
      int sum = 0;

      for (int x = r; x < r + 3; x++) {
        for (int y = c; y < c + 3; y++) {
          sum += grid[x][y];
        }
      }

      if (sum > max_coins) {
        max_coins = sum;
      }
    }
  }

  cout << max_coins;
  return 0;
}