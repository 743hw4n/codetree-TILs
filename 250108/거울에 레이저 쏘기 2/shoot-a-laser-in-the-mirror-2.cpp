#include <iostream>

#define MAX_N 1000
using namespace std;

int N;
char arr[MAX_N][MAX_N];

int start_num;
int x, y, move_dir;

int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, -1, 0, 1};

bool is_in_range(int x, int y) { return x >= 0 && x < N && y >= 0 && y < N; }

void Initialize(int num) {
  if (num <= N) {
    x = 0;
    y = num - 1;
    move_dir = 0;
  } else if (num <= 2 * N) {
    x = num - N - 1;
    y = N - 1;
    move_dir = 1;
  } else if (num <= 3 * N) {
    x = N - 1;
    y = N - (num - 2 * N);
    move_dir = 2;
  } else {
    x = N - (num - 3 * N);
    y = 0;
    move_dir = 3;
  }
}

void Move(int next_dir) {
  x += dx[next_dir];
  y += dy[next_dir];
  move_dir = next_dir;
}

int Simulate() {
  int move_num = 0;
  while (is_in_range(x, y)) {
    if (arr[x][y] == '/')
      Move(move_dir ^ 1);
    else
      Move(3 - move_dir);
    move_num++;
  }
  return move_num;
}

int main() {
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> arr[i][j];
    }
  }

  cin >> start_num;

  Initialize(start_num);

  int move_num = Simulate();

  cout << move_num;
  return 0;
}