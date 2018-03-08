#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
	int t;	cin>>t;
	while(t--)
	{
		ll beg, end, count=0;
		cin>>beg>>end;
		ll i=0;
		while(i*i <= end)
		{
			if(i*i >= beg)count++;
			i++;
		}
		cout<<count<<endl;
	}
	return 0;
}
