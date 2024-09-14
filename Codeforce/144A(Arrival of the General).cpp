#include <iostream>
using namespace std;

int main() {
    int n,Max=0,Min=101,maxi,mini;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>Max)
        {
            Max=arr[i];
            maxi=i;
        }
        if(arr[i] <= Min)
        {
            Min= arr[i];
            mini = i;
        }
    }
    if(maxi > mini)
    {
        mini++;
    }
    cout<<maxi+(n-1)-mini;


    return 0;
}
