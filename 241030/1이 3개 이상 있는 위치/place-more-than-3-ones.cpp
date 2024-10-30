#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int arr[101][101];

int n;

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> arr[i][j];
    }
  }

  int cnt = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int cntOne = 0;  // 주변 1의 개수 초기화
      for (int dir_num = 0; dir_num < 4; dir_num++) {
        int nx = i + dx[dir_num], ny = j + dy[dir_num];
        if (InRange(nx, ny) && arr[nx][ny] == 1)
          cntOne++;
      }

      // 주변 1의 개수가 3 이상이면 cnt 증가
      if (cntOne >= 3)
        cnt++;
    }
  }

  cout << cnt << endl;

  return 0;
}