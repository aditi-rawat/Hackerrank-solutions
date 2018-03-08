#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[26]={0};
	for(int i=0; i<26; i++)
		cin>>a[i];
	
	string s;	cin>>s;
	int n=s.size();
	int max=0;
	
	for(int j=0; j<n; j++)
	{
		if( a[int(s[j])-97] > max)
			max=a[int(s[j])-97];
	}
	
	cout<<max*n;
	return 0;
}
