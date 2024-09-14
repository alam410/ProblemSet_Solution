#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0;
    cin>>n;
    int p[n],q[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>q[i];
    }
    for(int i=0;i<n;i++)
    {
        if(q[i]-p[i] >= 2)
        {
            sum++;
        }
    }
    cout<<sum;

}
