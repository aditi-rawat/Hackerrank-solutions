#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n, sumi=0,sumf=0; //sum of the diagonals respectively
	cin>>n;
    int a[n][n];
    for(int i=0; i<n; i++)
    {
    	for(int j=0; j<n; j++)
    	{
    		cin>>a[i][j];
    	}
    }
    
    for(int i=0, j=(n-1); i<n,j>=0; i++,j--)
    {
        sumi=sumi+a[i][i];
        sumf=sumf+a[i][j];
   	}
    cout<<abs(sumi-sumf)<<endl;
    return 0;
        
}
