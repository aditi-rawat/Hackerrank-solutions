#include<bits/stdc++.h>
#define ll long int
using namespace std;
int main()
{
	ll n;
	int d;
	cin>>n>>d;
	ll a[n];
	for( ll ii=0; ii<n; ii++ )cin>>a[ii];
	sort(a, a+n);
	ll i, j=0, k=0, count=0;
	for( i=0; i<n,j<n,k<n; i++ )
	{	
		j=i+1;	k=j+1;
		while(a[j]-a[i] <= d)
		{
			if(a[j]-a[i] == d)
			{
				while(a[k]-a[j] <= d)
				{
					if(a[k]-a[j] == d){	count++; break; }
					k++;
				}		
			}
			j++;
		}
	}
	cout<<count;
}
