#include <iostream>
using namespace std;


void calculate(int a, char op, int b) {
	switch (op) {
		case '+':
			cout << a << " " << op << " " << b << " = " << a + b;
			break;

		case '-':
			cout << a << " " << op << " " << b << " = " << a - b;
			break;

		case '*':
			cout << a << " " << op << " " << b << " = " << a * b;
			break;

		case '/':
			cout << a << " " << op << " " << b << " = " << a / b;
			break;
		default:
			cout << "False";
			

	}
}


int main() {
	int a, b;
	char op;
	cin >> a >> op >> b;

	calculate(a, op, b);

	return 0;
}