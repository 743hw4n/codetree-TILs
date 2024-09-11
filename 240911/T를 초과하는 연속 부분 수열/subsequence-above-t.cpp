#include <iostream>

using namespace std;

int arr[1001];

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n, t;
	cin >> n >> t;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	
	int cnt = 0;
	int ans = 0;
	for (int i = 0; i < n; i++)
	{
		if (i > 0 && arr[i - 1] > t && arr[i] > t)
			cnt++;
		else
			cnt = 0;

		ans = max(ans, cnt);
	}

	cout << ans +1;

	return 0;
}