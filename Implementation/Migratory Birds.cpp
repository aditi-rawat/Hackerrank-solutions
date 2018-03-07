#include<bits/stdc++.h>
#define l long int
using namespace std;
int main()
{
	l n;	cin>>n;
	l a[6]={0};
	int temp;
	for(l i=0; i<n; i++)
	{
		cin>>temp;
		a[temp]++;
	}
	int min=1;
	for(int i=2; i<=5; i++)
	{
		if(a[i] > a[min])
		{
			min = i;
		}
	}
	cout<<min;
	return 0;
}
