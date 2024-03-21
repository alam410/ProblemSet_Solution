#include<bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int max_val = a + b + c;
     // Initialize max_val with the sum of all three numbers

    // Try all possible expressions and update max_val if a new maximum is found
    max_val = max(max_val, a + (b * c));
    max_val = max(max_val, (a * b) + c);
    max_val = max(max_val, a * b * c);
    max_val = max(max_val, (a + b) * c);
    max_val = max(max_val, a* (b+c) );

    cout << max_val << endl;

    return 0;
}
