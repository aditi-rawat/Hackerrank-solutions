#include<iostream>
#define ll long int
using namespace std;
int main()
{
    int q;
	ll n, k;
	cin>>n>>k>>q;
	ll a[n], b[n];
	
	for(ll i=0; i<n; i++)
		cin>>a[i];
	k=k%n;    
	ll j=0;
	
	for(ll i=n-k; i<n;i++)
		b[j++]=a[i];
    for(ll i=0; i<n-k; i++)
		b[j++]=a[i];
    
	while(q--)
	{
        cin>>j; cout<<b[j]<<endl;
    }
	return 0;
}
