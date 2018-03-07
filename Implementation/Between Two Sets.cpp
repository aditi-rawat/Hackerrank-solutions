#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,ans=0;	cin>>n>>m;
	int a[n], b[m], maxa=0, minb=101;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
		if(a[i]>maxa)maxa=a[i];
	}
	for(int i=0; i<m; i++)
	{
		cin>>b[i];
		if(b[i]<minb)minb=b[i];
	}
	while(maxa <= minb)
	{	int l=0;
		for(int i=0; i<n; i++)
		{
			if( maxa%a[i]==0)l++;
		}
		for(int i=0; i<m; i++)
		{
			if( b[i]%maxa==0)l++;
		}
		if(l==(m+n))ans++;
		maxa++;
	}
	cout<<ans;
	return 0;
}
