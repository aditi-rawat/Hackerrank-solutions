#include<bits/stdc++.h>
#define l long int
#define ll long long int
using namespace std;
int main()
{
	l i,j;
	ll k, cnt=0;
	cin>>i>>j>>k;
	for( l m=i; m<=j; m++)
	{
		l sum=0;
		l t,temp=m, mm=m;
		while(mm)
		{
			t=mm%10;
			sum=sum*10 + t;
			mm=mm/10;
		}
		if( abs(temp-sum)%k==0)cnt++;
	}
	cout<<cnt;
	return 0;
}
