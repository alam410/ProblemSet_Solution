#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int max_len = 1; // minimum length is 1
    int curr_len = 1; // initialize current length to 1

    for(int i = 1; i < n; i++)
    {
        if(arr[i] >= arr[i - 1]) // check if the current element is greater than or equal to the previous element
        {
            curr_len++; // increment the current length
            max_len = max(max_len, curr_len); // update max_len if necessary
        }
        else
        {
            curr_len = 1; // reset current length if the sequence breaks
        }
    }

    cout << max_len << endl;
    return 0;
}
