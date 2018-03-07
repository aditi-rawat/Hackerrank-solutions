#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int n;	cin>>n;
	int temp;
	cin>>temp;
	ll min=temp, max=temp, count_min=0, count_max=0;
	for(int i=1; i<n; i++)
	{
		cin>>temp;
		if(temp > max)
		{
			count_max++;
			max=temp;
		}
		if(temp<min)
		{
			count_min++;
			min=temp;
		}
	}
	cout<<count_max<<" "<<count_min;
	return 0;
}
