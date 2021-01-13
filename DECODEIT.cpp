//j2infy Codechef-Long Jan-21
#include<bits/stdc++.h>
#define IOS ios_base::sync_with_stdio(false); cin.tie(NULL);
using namespace std;
int main(void)
{
	IOS;
	int t;
	cin>>t;
	char a[16]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p'};
	while(t--)
	{
		int n;
		cin>>n;
		string s;
		cin>>s;
		string SNew="";
		for(int i=0;i<n;)
		{
			int sum=0;
			for(int j=1;j<=4;j++)
			{
				int p = 4-j;
				if(s[i]=='1') sum += pow(2,p);
				i++;
			}
			SNew += a[sum];
		}
		cout<<SNew<<"\n";
	}
	return 0;
}