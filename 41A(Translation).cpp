#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1;
    cin >> s2;
    int n = s2.size();
    int counter = 0;
    for (int i = 0; i < s1.size(); i++) {
        for (int j = n-1 ; j < 0; j--) {
            if (s1[i] == s2[j]) {
                counter++;
            }
        }
    }
    if (counter > 0) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
