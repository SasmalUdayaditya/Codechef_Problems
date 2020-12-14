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
		int n,k;
		cin>>n>>k;
		int a[n],count=0;
		if(n%2==0)
		{
			for(int i=1;i<=n;i++)
			{
				if(i%2==0) a[i] = i;
				else a[i] = -i;
			}
		}
		if(n%2!=0)
		{
			for(int i=1;i<=n;i++)
			{
				if(i%2!=0) a[i] = i;
				else a[i] = -i;
			}
		}
		count=ceil(double(n)/2.0);
		int sum=0;
		for(int i=1;i<=n;i++)
		{
			sum+=a[i];
			if(sum>0)
			{
				if(count<k)
				{
					int d = k-count;
					for(int j=n;j>=1;j--)
					{
						if(d>0 && a[j]<0)
						{
							a[j] = -a[j];
							d--;
							count+=1;
						}
						//if(d==0) break;
						if(count == k) break;
					}	
				}
				if(count>k)
				{
					int d = count - k;
					for(int j=n;j>=1;j--)
					{
						if(d>0 && a[j]>0)
						{
							a[j] = -a[j];
							d--;
							count--;
						}
						//if(d==0) break;
						if(count == k) break;
					}	
				}	
			}
			cout<<a[i]<<" ";	
		}
		cout<<"\n";
	}
	return 0;
}