#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;	cin>>t;
	ll n, tt, temp;
	while(t--)
	{
		ll ans=0;
		cin>>n;
		tt=n;
		while(n)
		{
			temp=n%10;
			if( temp!=0)
            {if(tt%temp==0)
                ans++;}
			n=n/10;
		}
		cout<<ans<<endl;
	}
	return 0;
}
