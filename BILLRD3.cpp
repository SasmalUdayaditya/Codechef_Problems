//j2infy Codechef-Long Jan-21
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
int main(void)
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		if(x==y) cout<<n<<" "<<n<<"\n";
		else
		{
			ll i = (k-1)%4;
			if(x>y) // Anti Clockwise Rotation
			{
				ll x1[4]={n,(y+n-x),0,(x-y)};
				ll y1[4]={(y+n-x),n,(x-y),0};
				cout<<x1[i]<<" "<<y1[i]<<"\n";
			}
			else //Clockwise Rotation
			{
				ll x2[4]={(n+x-y),n,(y-x),0};
				ll y2[4]={n,(n+x-y),0,(y-x)};
				cout<<x2[i]<<" "<<y2[i]<<"\n";
			}
		}
	}
	return 0;
}