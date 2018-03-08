#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[205], *ptr;  
	cin>>s;
    int num=strlen(s);
    long int n, count=0, c=0;    
	cin>>n;
    ptr=&s[0];
    while( *(ptr)!='\0')
    {
        if( *(ptr)=='a') count++;
        ptr++;
    }
    
	ptr=&s[0];
    int temp=n%num;

    while(temp--)
	{
    	if( *(ptr)=='a') c++;
    	ptr++;
	}
   
    cout<<((n/num)*count)+c;
    return 0;
}
