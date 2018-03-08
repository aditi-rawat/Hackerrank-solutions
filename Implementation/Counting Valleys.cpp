#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n;	cin>>n;
	char a[n];
	for(ll i=0; i<n; i++)cin>>a[i];
	ll counter=0, count=0;
	for(ll i=0; i<n; i++)
	{
		if(counter==0 && a[i]=='D')count++;
		if(a[i] == 'D' )
		{
			counter--;
		}
		if(a[i] == 'U' )
		{
			counter++;	
		}
	}
	cout<<count;
	return 0;
}
