#include <iostream>
#include <string>

using namespace std;

int N, T;
string str;
int board[100][100];

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};

int main() {
  cin >> N >> T;
  cin >> str;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> board[i][j];
    }
  }

  int dir = 0;
  int x = 0;
  int y = 0;
  int sum = 0;

  for (int i = 0; i < T; i++) {
    if (str[i] == 'L') {
      dir = (dir + 3) % 4;
    } else if (str[i] == 'R') {
      dir = (dir + 1) % 4;
    } else if (str[i] == 'F') {
      int nx = x + dx[dir];
      int ny = y + dy[dir];
      if (nx < 0 || nx >= N || ny < 0 || ny >= N) {
        continue;
      }

      x = nx;
      y = ny;

      sum += board[y][x];

      if (board[y][x] == 1) {
        break;
      }
    }
  }

  cout << sum;

  return 0;
}