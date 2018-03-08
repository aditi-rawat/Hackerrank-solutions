#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	ll n, p, countf=0, counti=0;
	cin>>n>>p;
	for( ll i=1; i<p; i=i+2 )counti++;
	if(n%2==0) 
	{
		for(ll i=n-1; i>=p; i=i-2)countf++; 
	}
	else
	for(ll i=n-2; i>=p; i=i-2)countf++;

	if(countf>=counti)cout<<counti;
	else cout<<countf;
	return 0;
}
