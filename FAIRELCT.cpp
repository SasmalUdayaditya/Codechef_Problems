//j2infy Codechef-Long Jan-21
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
#define ll long long int
using namespace std;
ll CalcSum(ll a[],ll n)
{
	ll sum=0;
	for(ll i=0;i<n;i++)
		sum+=a[i];
	return sum;
}
int main(void)
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		ll n,m;
		cin>>n>>m;
		ll jhon[n],jack[m];
		ll sumjhon=0,sumjack=0;
		for(int i=0;i<n;i++)
		{
			cin>>jhon[i];
			sumjhon+=jhon[i];
		}
		for(int i=0;i<m;i++)
		{
			cin>>jack[i];
			sumjack+=jack[i];
		}
		int count=0,flag=0;
		if(sumjhon > sumjack) count=0;
		else
		{
			sort(jhon,jhon+n);
			sort(jack,jack+m);
			int i=m-1;
			count = 1;
			while(count)
			{
				swap(jhon[(count-1)%n],jack[i]);
				int jh = CalcSum(jhon,n);
				int ja = CalcSum(jack,m);
				i--;
				if(jh > ja) break;
				else if((jh<=ja)&&i==0)
				{
					count = -1;
					break;
				}
				count++;
			}
		}
		cout<<count<<"\n";
	}
	return 0;
}