#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin>>T;

    while(T--)
    {
        int N,K,X,Y;
        cin>>N>>K>>X>>Y;
        int i =0;
        while(i<N)
        {   
            int temp;
            temp = (X + K) % N;
            if((i == (N-1)) && temp != Y)
            {
                cout<<"NO"<<"\n";
                break;
            }
            if(temp == Y)
            {
                cout<<"YES"<<"\n";
                break;
            }
            
            X=temp;
            i+=1;
        }
    }
    return 0;

}