#include<bits/stdc++.h>
#define ll long int
using namespace std;

int main()
{
	ll s,t,a,b,m,n;
	cin>>s>>t>>a>>b>>m>>n;
	
	ll apples[m], oranges[n], i, app=0, ora=0; 
	for( i=0;i<m;i++)
	{
		cin>>apples[i];
		if( apples[i]>=0) if( apples[i] >= (s-a) && apples[i] <=(t-a) )app++;
	}
	for( i=0;i<n;i++)
	{
		cin>>oranges[i];
		if(oranges[i]<=0)  if( abs(oranges[i]) >= abs(t-b)&& abs(oranges[i]) <= abs(s-b)  )ora++;
	}
	cout<<app<<endl<<ora;
	return 0;
}
