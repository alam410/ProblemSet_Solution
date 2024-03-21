#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum1=0,sum2=0,a=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum1  += arr[i];
    }
    sum1=sum1/2;
    sort(arr,arr+n);
    for(int j=n-1;j>=0;j--)
    {
        sum2+= arr[j];
        a++;
        if(sum1<sum2)
            break;
    }
    cout<<a;
}
