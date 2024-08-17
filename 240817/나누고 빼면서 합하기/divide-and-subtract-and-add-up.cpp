#include <iostream>
#include <vector>
using namespace std;

int n, m;
vector<int> v;

void sumDivide(int m) {
	int sum = 0;

	while (m >= 1) {
		sum += v[m-1];
		if (m % 2 == 1) m -= 1;
		else m /= 2;
	}

	cout << sum;
}
int main() {
	cin >> n >> m;
	
	while (n--) {
		int num;
		cin >> num;
		v.push_back(num);
	}

	sumDivide(m);


	return 0;
}