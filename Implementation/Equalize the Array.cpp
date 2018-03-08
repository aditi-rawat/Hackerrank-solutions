#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, temp;	cin>>n;
	int a[n], count[101]={0};
	for(int i=0; i<n; i++)
	{
		cin>>temp;
		count[temp]++;
	}	
	int max=0;
	for(int i=1; i<101; i++)
	{
		if(max<count[i])max=count[i];
	}
	cout<<n-max;
	return 0;
}
