#include <iostream>
using namespace std;

int findIndex(string str, string substr) {
	for (int i = 0; i <= str.length() - substr.length(); i++) {
		int j;
		for (j = 0; j < substr.length(); j++) {
			if (str[i + j] != substr[j])
				break;
		}
		if (j == substr.length()) return i;
	}

	return -1;
}


int main() {
	string str;
	cin >> str;

	string substr;
	cin >> substr;

	cout << findIndex(str, substr);
	
	return 0;
}