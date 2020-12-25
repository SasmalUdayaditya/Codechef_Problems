#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main(void)
{
	IOS;
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		double cz=0;
		for(int i=0;i<n;i++)
		{
			if(s[i] == '0') cz+=1;
		}
		double c1 = n - cz;
		double diff = (120.0 - n) + c1;
		double p=0.0;
		p = (diff / 120.0) * 100.0;
		if(p >= 75.0)
			cout<<"YES"<<"\n";
		else
			cout<<"NO"<<"\n";
	}
	return 0;
}