#include <iostream>
#include <list>
using namespace std;



int main() {
	list<char> l;

	int n, m;
	cin >> n >> m;

	while (n--) {
		char c;
		cin >> c;
		l.push_back(c);
	}

	list<char>::iterator it = l.end();

	while (m--) {
		char cmd;
		cin >> cmd;

		if (cmd == 'L')
		{
			if (it == l.begin()) return;
			it--;
		}

		else if (cmd == 'R')
		{
			if (it == l.end()) return;
			it++;
		}

		else if (cmd == 'D') {
			if (it == l.end()) return;
			l.erase(it);
		}

		else if (cmd == 'P') {
			char x;
			cin >> x;
			l.insert(it, x);
		}
	}

	for (it = l.begin(); it != l.end(); it++) {
		cout << *it;
	}

	return 0;
}