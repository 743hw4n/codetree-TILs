#include <iostream>
using namespace std;

int n, t;
int r, c;
char d;
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int dir(char d) {
  if (d == 'U')
    return 2;
  else if (d == 'D')
    return 1;
  else if (d == 'R')
    return 0;
  else if (d == 'L')
    return 3;
}

bool InRange(int x, int y) {
  return (0 <= x && x < n && 0 <= y && y < n);
}

int main() {
  cin >> n >> t;
  cin >> r >> c >> d;

  int x = r - 1, y = c - 1;

  int dir_num = dir(d);

  for (int i = 0; i < t; i++) {
    int nx = x + dx[dir_num], ny = y + dy[dir_num];
    if (InRange(nx, ny))
      x = nx, y = ny;
    else {
      dir_num = 3 - dir_num;
    }
  }

  cout << x + 1 << " " << y + 1;

  return 0;
}