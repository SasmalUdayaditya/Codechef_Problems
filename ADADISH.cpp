#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)  cin>>a[i];
        
        if(n==1) cout<<a[0]<<"\n";
       
        if(n==2) cout<<max(a[0],a[1])<<"\n";
       
        if(n==3)
        {
            sort(a,a+n);
            cout<<max(a[0]+a[1],a[2])<<"\n";
        }
        
        if(n==4)
        {
            sort(a,a+n);
            int i = max(a[0]+a[3] , a[2]+a[1]);
            int j = max(a[0]+a[1]+a[2],a[3]);
            cout<<min(i,j)<<"\n";
        }

    }

    return 0;
}