#include<bits/stdc++.h>
using namespace std;

int main()
{
	int n, k;
	cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)
		cin>>a[i];
	sort(a, a+n);
	
	if(k>a[n-1])
		cout<<"0";
	else
		cout<<a[n-1]-k;
	return 0;
}
