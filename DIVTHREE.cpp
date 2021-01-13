//j2infy Codechef-Long Jan-21
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main(void)
{
	IOS;
	ll t;
	cin>>t;
	while(t--)
	{
		ll n,k,d;
		cin>>n>>k>>d;
		ll a[n];
		ll sum=0;
		for(ll i=0;i<n;i++)
		{
			cin>>a[i];
			sum+=a[i];
		}
		if(sum<k)
		{
			cout<<"0"<<"\n";
		}
		else if(sum>=k)
		{
			ll contest = sum/k;
			cout<<min(contest,d)<<"\n";
		}
	}
	return 0;
}