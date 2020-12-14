#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
#define xp(p) pow(2,p)
#define l(x) log2(x) 
using namespace std;
int main(void)
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,x;
		cin>>n>>x;
		ll a[n];
		for(ll i = 0;i<n;i++)
			cin>>a[i];
		ll k,i=0;
		for(k = x ; k>0 && i<n-1;k--)
		{
			int flag = 0;
			ll p,r;
			p = l(a[i]);
			r = xp(p);
			a[i] = a[i] ^ r;
			for(ll j = i+1 ;j<n;j++)
			{
				if(a[j] ^ r < a[j])
				{
					a[j] = a[j] ^ r;
					flag = 1;
					break;
				}
			}
			if(flag == 0) a[n-1] = a[n-1] ^ r;
			while(a[i]<0) i++;
			ll z;
			z = k+1;
			if(z>0)
			{
				if(n<3 && z%2==0)
				{
					a[n-1] = a[n-1] ^1;
					a[n-2] = a[n-2] ^1;
				}
			}
		}
		for(ll c = 0;c<n;c++) cout<<a[c]<<" ";
		cout<<"\n";
		
	}
	return 0;
}