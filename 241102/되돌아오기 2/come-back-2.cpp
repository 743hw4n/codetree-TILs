#include <iostream>
using namespace std;

int dx[4] = {0, 1, 0, -1};
int dy[4] = {1, 0, -1, 0};
int dir_num = 0;
int x = 0, y = 0;
int total_time = 0;
int result = -1;

int main() {
  string cmd;
  cin >> cmd;
  for (auto& str : cmd) {
    if (str == 'F') {
      x += dx[dir_num];
      y += dy[dir_num];
    } else if (str == 'R') {
      dir_num = (dir_num + 1) % 4;
    } else if (str == 'L') {
      dir_num = (dir_num + 3) % 4;
    }

    total_time++;  // 모든 명령(F, R, L)에 대해 시간 증가

    if (x == 0 && y == 0 && result == -1) {
      result = total_time;
    }
  }
  cout << result << endl;
  return 0;
}