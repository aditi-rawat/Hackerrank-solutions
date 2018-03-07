#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;	cin>>n;
	int s[n];
	for(int j=0; j<n; j++)cin>>s[j];
	int d, m;	cin>>d>>m;
	int i=0, count=0; 
	while(i < n)
	{
		int sum=0;
		if((i+m) > n)break;
		for(int j=i; j<(i+m); j++)
		{
			sum += s[j];
		}
		if(sum == d)	count++;
		i++;
	}
	cout<<count;
	return 0;
}
