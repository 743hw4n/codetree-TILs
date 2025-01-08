#include <iostream>
using namespace std;

int N, M;
int r, c;

int arr[101][101];
int dx[4] = {0, 0, 1, -1};
int dy[4] = {1, -1, 0, 0};

bool isValid(int x, int y) { return x >= 0 && x < N && y >= 0 && y < N; }

int countMarked(int x, int y) {
  int count = 0;

  for (int i = 0; i < 4; i++) {
    int nx = x + dx[i];
    int ny = y + dy[i];
    if (isValid(nx, ny) && arr[nx][ny] == 1) {
      count++;
    }
  }

  return count;
}

int main() {
  cin >> N >> M;

  while (M--) {
    cin >> r >> c;
    r--;
    c--;

    arr[r][c] = 1;

    if (countMarked(r, c) == 3) {
      cout << "1\n";
    } else {
      cout << "0\n";
    }
  }
  return 0;
}