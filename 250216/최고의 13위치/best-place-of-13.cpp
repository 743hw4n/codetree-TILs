// #include <algorithm>
// #include <iostream>
// using namespace std;

// int n = 5;
// int arr[5][5] = {{1, 0, 0, 0, 0},
//                  {0, 1, 0, 0, 0},
//                  {0, 1, 1, 0, 1},
//                  {0, 0, 0, 1, 0},
//                  {0, 0, 0, 0, 0}};

// int main() {
//   int max_cnt = 0;
//   for (int i = 0; i < n; i++)
//     for (int j = 0; j < n - 1; j++)
//       max_cnt = max(max_cnt, arr[i][j] + arr[i][j + 1]);

//   cout << max_cnt;
// }
#include <iostream>
using namespace std;

int N;
int grid[20][20];

int main() {
  cin >> N;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> grid[i][j];
    }
  }

  int max_cnt = 0;

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N - 2; j++) {
      max_cnt = max(max_cnt, grid[i][j] + grid[i][j + 1] + grid[i][j + 2]);
    }
  }

  cout << max_cnt;
}