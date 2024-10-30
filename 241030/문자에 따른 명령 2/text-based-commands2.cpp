#include <iostream>
using namespace std;

int dx[4] = {0, -1, 0, 1}, dy[4] = {1, 0, -1, 0};

int main() {
  string N;
  cin >> N;

  int dir = 0;
  int x = 0, y = 0;
  for (int i = 0; i < N.size(); i++) {
    if (N[i] == 'L') {
      dir = (dir + 1) % 4;
    }

    else if (N[i] == 'R') {
      dir = (dir - 1 + 4) % 4;
    }

    else if (N[i] == 'F') {
      x += dx[dir];
      y += dy[dir];
    }
  }

  cout << x << " " << y;

  return 0;
}