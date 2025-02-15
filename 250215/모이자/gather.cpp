#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int N;
int arr[100];

int main() {
  cin >> N;

  for (int i = 1; i <= N; i++) {
    cin >> arr[i];
  }

  int min_sum = INT_MAX;
  for (int i = 1; i <= N; i++) {
    int sum_diff = 0;
    for (int j = 1; j <= N; j++) {
      sum_diff += abs(i - j) * arr[j];
    }
    min_sum = min(min_sum, sum_diff);
  }

  cout << min_sum << endl;
  return 0;
}