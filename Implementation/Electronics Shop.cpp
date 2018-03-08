#include<iostream>
#include<algorithm>
#define l long int
using namespace std;

int main()
{
    l s;
    int n, m;
    cin>>s>>n>>m;
    l key[n], usb[m];

    for(int i=0; i<n; i++)cin>>key[i];
    for(int i=0; i<m; i++)cin>>usb[i];
    int max=0;
    for(int i=0; i<n; i++)
    {
         for(int j=0; j<m; j++)
         {
             if(key[i]+usb[j] > max &&  key[i]+usb[j]<= s)max=key[i]+usb[j];
         }
    }    
    if(max)cout<<max;
    else cout<<-1;
    return 0;
}

