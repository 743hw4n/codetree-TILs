#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int digits[100000];
    int cnt = 0;

    while (true) {
        if (n < 2) {
            digits[cnt] = n;
            cnt++;
            break;
        }

        digits[cnt] = n % 2;
        n /= 2;
        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--)
        cout << digits[i];
}