#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;	cin>>t;
	while(t--)
	{
		ll b, w, x, y, z;
		cin>>b>>w;
		cin>>x>>y>>z;
		if( x > (y+z)&& y > (x+z) )
		{
			if(b*(y+z)+w*y > b*x+w*(x+z))cout<<b*x+w*(x+z);
			else cout<<b*(y+z)+w*y ;
		}
		else if( x > (y+z) )
			cout<<b*(y+z)+w*y;	
		else if( y > (x+z) )
			cout<<b*x+w*(x+z);
		else 
			cout<<b*x + y*w;
			
		cout<<endl;
	}
	return 0;
}
