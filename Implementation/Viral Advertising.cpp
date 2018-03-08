#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, sum=0; 
	cin>>n;
	int m=5;
	for(int i=1; i<=n; i++)
	{
		sum=sum+floor(m/2);
		m=floor(m/2)*3;
	}
	cout<<sum<<endl;
}
