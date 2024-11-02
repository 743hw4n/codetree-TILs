#include <iostream>
using namespace std;

int n;
int x = 0, y = 0;
int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
char dir;
int dist;
int total_time = 0;
int result = -1;

int to_dir_num(char dir) {
  if (dir == 'N')
    return 0;
  else if (dir == 'E')
    return 1;
  else if (dir == 'S')
    return 2;
  else
    return 3;
}

int main() {
  cin >> n;

  for (int i = 0; i < n; i++) {
    cin >> dir >> dist;
    int dir_num = to_dir_num(dir);
    for (int j = 0; j < dist; j++) {
      x += dx[dir_num];
      y += dy[dir_num];
      total_time++;

      if (x == 0 && y == 0 && result == -1) {
        result = total_time;
      }
    }
  }
  cout << result << endl;

  return 0;
}