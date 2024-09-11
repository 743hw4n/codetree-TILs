#include <iostream>

using namespace std;

int arr[2001];

int main() {

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int cnt = 0;

	int ans = 0;

	for (int i = 0; i < N; i++)
	{
		if (i >= 1 && arr[i] * arr[i - 1] > 0)
			cnt++;
		else
			cnt = 1;

		ans = max(ans, cnt);
	}

	cout << ans;

	return 0;
}