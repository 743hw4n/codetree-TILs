#include <iostream>
#include <vector>
using namespace std;

void abs(vector<int>& v) {
	for (int i = 0; i < v.size(); i++) {
		if (v[i] < 0) {
			v[i] = abs(v[i]);
		}
	}
 }

int main() {
	int n;
	cin >> n;

	vector<int> v;
	for (int i = 0; i < n; i++) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	abs(v);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	return 0;
}