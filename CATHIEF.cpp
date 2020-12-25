#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int;
using namespace std;
int main(void)
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		ll x,y,k,n;
		cin>>x>>y>>k>>n;
		ll diff = abs(x-y);
		if(diff%(2+k)==0) cout<<"YES"<<"\n";
		if(diff%(2+k)!=0) cout<<"NO"<<"\n";
	}
	return 0;
}