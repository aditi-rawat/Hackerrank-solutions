#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, temp;	cin>>n;
	int a[101]={0}, sum=0;
	for( int i=1; i<=n; i++)
	{
		cin>>temp;
		a[temp]++;
	}
	for(int i=1; i<=100; i++)sum=sum+a[i]/2;
	cout<<sum;
	return 0;
}
