#include <iostream>
using namespace std;

int N, M;
int arr[100][100];

// 아래(0)
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};

int main()
{
  cin >> N >> M;
  int x = 0, y = 0;
  int dir = 0;
  int num = 1;

  while (num <= N * M)
  {
    arr[x][y] = num++;

    int nx = x + dx[dir];
    int ny = y + dy[dir];

    if (nx < 0 || nx >= N || ny < 0 || ny >= M || arr[nx][ny] != 0)
    {
      dir = (dir + 1) % 4;
      nx = x + dx[dir];
      ny = y + dy[dir];
    }

    x = nx;
    y = ny;
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
      cout << arr[i][j] << ' ';
    }
    cout << '\n';
  }
  return 0;
}