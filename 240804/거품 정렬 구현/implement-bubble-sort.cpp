#include <iostream>
#include <vector>
using namespace std;

void sort(vector<int>& v) {
	int n = v.size();

	for(int j = 0; j < n-1; j++) {
		for (int i = 0; i <n-j-1; i++) {
			if (v[i] > v[i + 1]) {
				int temp = v[i];
				v[i] = v[i + 1];
				v[i + 1] = temp;
			}
		}
	}
}

int main() {
	int n;
	cin >> n;
	vector<int> v;
	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sort(v);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}

	return 0;
}