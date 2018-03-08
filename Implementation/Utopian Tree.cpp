#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i;	
	cin>>t;
	while(t--)
	{
		i=1;	
		cin>>n;
		int temp=n;
		
		while(n>0)
		{
			i=i*2 + 1;
			n=n-2;
		}
		
		if(temp%2==0)
			cout<<i<<endl;
		else
			cout<<(i-1)<<endl;
		
	}
	return 0;
}
