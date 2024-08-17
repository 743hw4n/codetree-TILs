#include <iostream>
using namespace std;

void print(int n) {
	if (n == 0) return;
	
	cout << "Hello World" << endl;
	print(n - 1);
}
int main() {
	int n;
	cin >> n;

	print(n);
	
	return 0;
}