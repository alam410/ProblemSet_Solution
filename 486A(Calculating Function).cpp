#include <iostream>
using namespace std;

int main() {
    long long n; // Change int to long long as it was a big value input
    long long a = 0, b = 0; // Change int to long long
    cin >> n;
    if (n % 2 == 0) {
        a = n / 2;
        cout << a;
    } else {
        b = -((n / 2) + 1);
        cout << b;
    }
    return 0;
}
