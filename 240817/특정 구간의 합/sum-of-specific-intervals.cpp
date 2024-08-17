#include <iostream>
#include <vector>
using namespace std;



int main() {
	int n, m;
	cin >> n >> m;
	
	vector<int> v;

	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	while (m--) {
		int a1, a2, sum = 0;
		cin >> a1 >> a2;
		for (int i = a1 - 1; i < a2; i++) {
			sum += v[i];
		}
		cout << sum << endl;
	}

	return 0;
}