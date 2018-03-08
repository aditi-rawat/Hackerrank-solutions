#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, j, jj;	
	cin>>n;
	int a[n];
	
	for(int i=0; i<n; i++)
		cin>>a[i];
	for(int i=1; i<=n; i++)
	{
		for( j=0; j<n; j++)
		{
			if(a[j]==i)break;
		}
		j++;
		for( jj=0; jj<n; jj++)
		{
			if(a[jj]==j)break;
		}
		cout<<jj+1<<endl;
	}
	return 0;
}
