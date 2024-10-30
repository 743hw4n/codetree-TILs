#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int arr[101][101];

int n;

bool InRange(int x, int y) {
  return (0 <= x && x < 5 && 0 < 5 && 0 <= y && y < 5);
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }
  int x = 0, y = 0;

  int cntOne = 0;
  int cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      for (int dir_num = 0; dir_num < 4; dir_num++) {
        int nx = x + dx[dir_num], ny = y + dy[dir_num];
        if (InRange(nx, ny) && arr[nx][ny] == 1)
          cntOne++;
      }
    }
    if (cntOne >= 3)
      cnt++;
  }

  cout << cnt;

  return 0;
}