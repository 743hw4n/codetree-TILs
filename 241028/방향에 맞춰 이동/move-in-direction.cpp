#include <iostream>
using namespace std;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int N;
int dis;
char dir;
int x, y;

int main() {
  cin >> N;
  while (N--) {
    cin >> dir >> dis;
    if (dir == 'E')
      dir = 0;
    else if (dir == 'W')
      dir = 2;
    else if (dir == 'N')
      dir = 1;

    else if (dir == 'S')
      dir = 3;

    x += dx[dir] * dis;
    y += dy[dir] * dis;
  }

  cout << x << " " << y;
}