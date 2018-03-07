#include<bits/stdc++.h>
using namespace std;
int main()
{
	double neg=0, pos=0, z=0;//counter for negative, positive and zeroes repectively
	int n;	cin>>n;
	double a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]<0)
		{
			neg++;
		}
		else if(a[i]==0)
		{
			z++;
		}
		else
		{
			pos++;
		}
	}
	cout<<pos/n;
	cout<<"\n"<<neg/n;
	cout<<"\n"<<z/n;
	return 0;
}
