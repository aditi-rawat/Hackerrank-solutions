#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, k, t, b[10];	cin>>t;
	for(int i=0; i<t; i++)
	{
		long int a[1000];
		cin>>n>>k;
		int count=0;
		for(int j=0; j<n; j++)
		{
			cin>>a[j];
			if(a[j]<=0)
			{
				count++;
			}
		}
		if(count<k) 	b[i]=0;
		else	b[i]=1;
	}
	for(int i=0; i<t; i++)
	{
		if(b[i]==0)	cout<<"YES"<<"\n";
		else cout<<"NO"<<"\n";
	}
	return 0;
}
