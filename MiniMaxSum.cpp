#include<bits/stdc++.h>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int i,arr[5];

    i=0;
    while(i<5)
    {
        cin>>arr[i];

        i+=1;
    }

    sort(arr,arr+5);
    while(i<5)
    {
        cout<<arr[i]<<" ";

        i+=1;
    }


    return 0;
}