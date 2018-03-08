#include<bits/stdc++.h>
using namespace std;
int main(){
	int q;	cin>>q;
	while(q--)
	{
		int x, y, z;
		cin>>x>>y>>z;
		if( abs(x-z) == abs(y-z) )cout<<"Mouse C";
		else if( abs(x-z) < abs(y-z) )cout<<"Cat A";
		else cout<<"Cat B";
		
		cout<<endl;
	}
	return 0;
}
