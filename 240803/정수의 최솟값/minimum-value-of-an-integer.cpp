#include <iostream>
using namespace std;

int Min(int a, int b, int c) {
	int smallerAB = min(a, b);
	int smaller = min(smallerAB, c);

	return smaller;
}


int main() {
	int a, b, c;
	cin >> a >> b >> c;

	cout << Min(a, b, c);

	return 0;
}