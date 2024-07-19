#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int arr[2][4];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    cout << fixed;
    cout.precision(1);

    for (int i = 0; i < 2; i++) {
        double col_sum = 0;
        for (int j = 0; j < 4; j++) {
            col_sum += arr[i][j];
        }
        cout << col_sum / 4 << " ";
    }

    cout << endl;

    for (int j = 0; j < 4; j++) {
        double row_sum = 0;
        for (int i = 0; i < 2; i++) {
            row_sum += arr[i][j];
        }
        cout << row_sum / 2 << " ";
    }

    cout << endl;

    double total_sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            total_sum += arr[i][j];
        }
    }

    cout << total_sum / 8;

    return 0;
}