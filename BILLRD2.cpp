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
		ll n,k,x,y;
		cin>>n>>k>>x>>y;
		if(x==y && x!=0 && y!=0) cout<<n<<" "<<n<<"\n"; // when it starts from diagonal point then it will always go to pocket.
		else
		{
			int flag = 0,iter=1;
			while(k)
			{
				if(x!=n && y!=n && iter==1) //When start from somewhere in the board except edge
				{
					if((y >= n/2) && x<y) //upper triangle
					{
						ll coll = (n-y);
						y = n;
						x += coll;
						flag = 1;
					}
					else if((x>= n/2) && y<x) //lower triangle
					{
						ll coll = (n-x);
						x = n;
						y +=coll;
						flag = 0;
					}
					iter = 0;
				}
				k-=1;
				if(flag == 0 && k>=1)
				{
					if(x==n && y!=n) // when collide with right wall
					{
						ll coll = (n-y);
						y = n;
						x -= coll;
					}
					else if(y==n && x!=n) // when collide with upper wall
					{
						y = y - x;
						x = 0;
					}
					else if(x==0 && y!=0) // when collide with left wall
					{
						x = x + y;
						y = 0;
					}
					else if(y==0 && x!=0) // when collide with lower wall
					{		
						ll coll = n - x;
						x += coll;
						y += coll;
					}
				}
				else if(flag == 1 && k>=1)
				{
					if(y==n && x!=n) // when collide with upper wall
					{
						swap(x,y);
						
					}
					else if(x==n && y!=n) // when collide with right wall
					{
						x = x-y;
						y=0;
					}
					else if(y==0 && x!=0) // when collide with lower wall
					{		
						swap(x,y);
					}
					else if(x==0 && y!=0) // when collide with left wall
					{
						x = n - y;
						y = n;
					}	
				}				
			}
			cout<<x<<" "<<y<<"\n";	
		}
	}
	return 0;
}