#include <iostream>
using namespace std;

class codetree {
private:
	string name;
	int code;
public:
	codetree(string name = "codetree", int code = 50) {
		this->name = name;
		this->code = code;
	}

	void print() {
		cout << "product " << code << " is " << name << '\n';
	}
};

int main() {
	string name;
	int code;
	cin >> name >> code;

	codetree c1;
	codetree c2(name, code);

	c1.print();
	c2.print();
}