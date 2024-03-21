#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        char arr[n];
        int b = -1, c = -1, sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] == 'B') {
                if (b == -1) {
                    b = i;
                }
                c = i;
            }
        }

        if (b != -1 && c != -1) {
            sum = c - b + 1;
        } else if (b != -1 || c != -1) {
            sum = 1;
        }

        cout << sum << endl;
    }

    return 0;
}
