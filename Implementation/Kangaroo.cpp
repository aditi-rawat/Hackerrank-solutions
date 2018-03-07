#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x1, v1, x2, v2, count=0;
	long int n=10000;
	cin >> x1 >> v1 >> x2 >> v2;
	while(n>=0)
	{
		if( (x1+(n*v1))  == (x2+(n*v2)) )
		{
			count=1;
			break;	
		}
		n--;	
	}
	if(count==1)
		cout<<"YES";
	else 
		cout<<"NO";
	return 0;
}
