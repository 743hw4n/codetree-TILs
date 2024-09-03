#include <iostream>

using namespace std;

int main() {
   
    int n;
    cin >> n;

    int b;
    cin >> b;

    int digits[1000];
    int cnt = 0;

    while (true) {
        if (n < b) {
            digits[cnt] = n;
            cnt++;
            break;
        }

        digits[cnt] = n % b;
        n /= b;
        cnt++;
    }

    for (int i = cnt - 1; i >= 0; i--) {
        cout << digits[i];
   }

    return 0;
}