#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;



int main() {
	int n, k;
	string t;
	cin >> n >> k >> t;

	string words[101];

	for (int i = 0; i < n; i++) {
		cin >> words[i];
	}

	vector<string> filter_words;

	for (int i = 0; i < n; i++) {
		if (words[i].find(t) == 0) filter_words.push_back(words[i]);
	}

	sort(filter_words.begin(), filter_words.end());

	cout << filter_words[k - 1];

	return 0;
}