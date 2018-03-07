#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	ll n;	cin>>n;
	ll height[n];
	for(ll i=0; i<n; i++)
		cin>>height[i];
	sort(height, height+n);
	
	ll max = height[n-1], count=1 ;
	
	for(ll i=n-2; i>=0; i--)
	{
		if(height[i]==max)
			count++;
		else
			break;
	}
	cout<<count;
	return 0;
}
