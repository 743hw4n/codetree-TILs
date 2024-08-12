#include <iostream>
#include <string>
using namespace std;

bool isMore2(string s) {
	bool alphabet[26] = { false };
	int diff_count = 0;

	for (char ch : s) {
		int index = ch - 'a';
		if (!alphabet[index])
		{
			alphabet[index] = true;
			diff_count++;
		}
	}


	return diff_count >= 2;
}


int main() {
	string s;
	cin >> s;

	if (isMore2(s)) cout << "Yes";
	else cout << "No";


	return 0;

}