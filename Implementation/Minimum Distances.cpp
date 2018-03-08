#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main()
{
	ll max, n;	cin>>n;
    max=n;
	ll a[n];	
	for(ll i=0; i<n; i++)cin>>a[i];
	for(ll i=0; i<n; i++){
		for(ll j=i+1; j<n; j++)
			{
				if(a[i]==a[j])
					{
                    if(abs(i-j)<max)
					max=abs(i-j);
					}
			}
    }
	if(max==n)cout<<"-1";
	else cout<<max;
	return 0;
}
