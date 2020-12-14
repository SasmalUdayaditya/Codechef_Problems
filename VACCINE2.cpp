#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
    ll t; cin>>t;
    while(t--)
    {
        ll n,d;
        cin>>n>>d;
        ll a[n],count=0,ncount=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]>=80 || a[i]<=9)
                count++;
            else
                ncount++;
        }
        ll sum=ceil((double)count/(double)d + ceil((double)ncount/(double)d));
        cout<<sum<<endl;
    }
	return 0;
}