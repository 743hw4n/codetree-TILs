#include <iostream>
using namespace std;

int n, t;
int r, c;
char d;
int dx[4] = {0, 1, -1, 0};
int dy[4] = {1, 0, 0, -1};

int dir(char d) {
  if (d == 'U')
    return 0;
  else if (d == 'D')
    return 3;
  else if (d == 'R')
    return 1;
  else if (d == 'L')
    return 2;
}

bool InRange(int x, int y) {
  return (0 < x && x <= n && 0 < y && y <= n);
}

int main() {
  cin >> n >> t;
  cin >> r >> c >> d;

  int x = c, y = r;

  int dir_num = dir(d);

  for (int i = 0; i < t; i++) {
    x = x + dx[dir_num], y = y + dy[dir_num];
    if (!InRange(x, y)) {
      dir_num = 3 - dir_num;
      x += dx[dir_num];
      y += dy[dir_num];
      // i++;
    }
  }

  cout << y << " " << x;

  return 0;
}