#include <iostream>
#include <string>
using namespace std;

bool isPalin(string& s) {
	for (int i = 0; i < s.size(); i++) {
		if (s[i] != s[s.size() - i - 1])
			return false;
	}

	return true;
}

int main() {
	string s;
	cin >> s;

	if (isPalin(s)) cout << "Yes";
	else cout << "No";

	return 0;
}