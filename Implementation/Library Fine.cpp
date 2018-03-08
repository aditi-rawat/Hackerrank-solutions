#include<bits/stdc++.h>
using namespace std;
int main()
{
	int da, de, ma, me, ya, ye;
	cin>>da>>ma>>ya>>de>>me>>ye;
	
    if(ye-ya>0 || (ye-ya==0)&&(me-ma>0))
		cout<<"0";
	else if( (de-da >= 0)&&(me-ma >= 0)&&(ye-ya >= 0) )
		cout<<"0";
	else if( (da-de > 0)&&(ma-me == 0)&&(ya-ye == 0) )
		cout<<15*(da-de);
	else if( (ma-me > 0)&&(ya-ye == 0) )
		cout<<500*(ma-me);
	else 
		cout<<"10000";
		
	return 0;
}
