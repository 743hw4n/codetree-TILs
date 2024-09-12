#include <iostream>
#define MAX_T 1000000
using namespace std;

int pos_a[MAX_T + 1], pos_b[MAX_T + 1];
int n, m;

int main() {
	cin >> n >> m;

	int time_a = 1;
	for (int i = 0; i < n; i++)
	{
		int t; char d;
		cin >> t >> d;
		if (d == 'R') {
			while (t--) {
				pos_a[time_a] = pos_a[time_a - 1] + 1;
				time_a++;
			}
		}
		else {
			while (t--) {
				pos_a[time_a] = pos_a[time_a - 1] - 1;
				time_a++;
			}
		}
	}

	int time_b = 1;
	for (int i = 0; i < m; i++)
	{
		int t; char d;
		cin >> t >> d;
		if (d == 'R') {
			while (t--) {
				pos_b[time_b] = pos_b[time_b - 1] + 1;
				time_b++;
			}
		}
		else {
			while (t--) {
				pos_b[time_b] = pos_b[time_b - 1] - 1;
				time_b++;
			}
		}
	}

	if (time_a > time_b) {
		for (int j = time_b; j < time_a; j++)
		{
			pos_b[j] = pos_b[time_b-1];
		}
	}
	else if (time_a < time_b) {
		for (int j = time_a; j < time_b; j++)
		{
			pos_a[j] = pos_a[time_a-1];
		}
	}

	int cnt = 0;

	for (int i = 1; i < max(time_a, time_b); i++) {
		if (pos_a[i] == pos_b[i]) {
			if (pos_a[i - 1] != pos_b[i - 1]) {
				cout << i << endl;
				cnt++;
			}
		}
	}


	cout << cnt;
	return 0;
}