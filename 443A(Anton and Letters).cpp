#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int a = 0;
    getline(cin, s);
    int n = s.size();
    sort(s.begin(), s.end());
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '}' || s[i] == ',')
        {
            continue; // Skip special characters
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            // Check if the character is within 'a' to 'z'
            if (i == 0 || s[i] != s[i - 1])
            {
                // Increment 'a' only if it's a new character
                a++;
            }
        }
    }
    cout << a;
    return 0;
}
