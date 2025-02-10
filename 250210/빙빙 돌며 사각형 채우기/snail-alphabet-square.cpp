#include <iostream>
using namespace std;

int N, M;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
char alphabet[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
                     'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
                     'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
char map[100][100];

bool isInside(int x, int y) { return (0 <= x && x < M && 0 <= y && y < N); }

int main() {
  cin >> N >> M;

  int x = 0, y = 0;
  int dir = 0;
  int idx = 0;

  for (int i = 0; i < N * M; i++) {
    map[y][x] = alphabet[idx];
    idx = (idx + 1) % 26;

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (!isInside(nx, ny) || map[ny][nx] != '\0') {
      dir = (dir + 1) % 4;
      nx = x + dx[dir];
      ny = y + dy[dir];
    }

    x = nx;
    y = ny;
  }

  for (int r = 0; r < N; r++) {
    for (int c = 0; c < M; c++) {
      cout << map[r][c] << " ";
    }
    cout << "\n";
  }

  return 0;
}