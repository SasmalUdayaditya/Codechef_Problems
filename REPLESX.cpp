#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--)
    {
        int i,N,X,p,k;
        cin>>N>>X>>p>>k;
        int arr[N];

        i=1;
        while(i<=N)
        {
            cin>>arr[i];
            i+=1;
        }
        int flag=0,count=-1;
        i=1;
        sort(arr,arr+N);
        // cout<<arr[N];
        while(i<=N)
        {
            sort(arr,arr+N);
            count+=1;
            if(arr[p]==X)
            {   
                break;
            }
            if(i==N && arr[p]!=X)
            {
                flag = 1;
                break;
            }
            else
            {
                arr[k]=0;
            }

            count+=1;
            i+=1;

        }
        if(flag == 1)
        {
            cout<<-1<<"\n";
        }
        else
        {
            cout<<count<<"\n";
        }
        
    }
    return 0;

}