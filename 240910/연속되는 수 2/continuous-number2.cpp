#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;

	int arr[1000];
	int ans = 0, cnt = 0;
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];

		if (i >= 1 && arr[i] == arr[i - 1])
			cnt++;
		else
			cnt = 1;

		ans = max(ans, cnt);
	}

	cout << ans;
	
	return 0;
}