#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int n=s.size();
    for(int i=0;i<n;)
    {
        if(s.substr(i, 3) == "WUB")
        {
            cout<<" ";
            i += 3; // Move to the next position after "WUB"
            continue;
        }
        else
        {
            cout<<s[i];
            i++;

        }
    }
}
