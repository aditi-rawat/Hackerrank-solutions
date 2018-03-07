#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int i,n, k, sum=0, b_ch, b_ac;
	cin>>n>>k;
	long int a[n];
	for(i=0; i<n; i++)
	{
		cin>>a[i];
		sum=sum+a[i];
	}	
	sum=sum-a[k];
	sum=sum/2;
	cin>>b_ch;
	if(sum==b_ch)
	{
		cout<<"Bon Appetit";
	}
	else
	{
		cout<<b_ch-sum;
	}
	return 0;
}
