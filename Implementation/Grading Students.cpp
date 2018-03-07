#include<iostream>
using namespace std;

int main()
{
	int n, grade;	
	cin>>n;
	
	while(n--)
	{
		cin>>grade;
		if(grade>=38 && (grade+1)%5==0 )
			cout<<grade+1<<endl;
		else if(grade>=38 && (grade+2)%5==0 )
			cout<<grade+2<<endl;
		else 
			cout<<grade<<endl;
	}
	
	return 0;
}
