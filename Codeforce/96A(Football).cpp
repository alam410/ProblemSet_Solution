#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int a = 0;
    int b = 0;

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            a++;
            b = 0;
        }
        else
        {
            b++;
            a = 0; // Reset count for consecutive ones
        }
        if (a == 7 || b == 7)
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
    return 0;
}
