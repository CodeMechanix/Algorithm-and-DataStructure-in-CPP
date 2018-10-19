#include<bits/stdc++.h>
using namespace std;
void triangleRecursion(int x, int n)
{
	if(x==n-1) return;
	int i,j,k;
	triangleRecursion(x-1, n);
	for( i=n; i>0; i--)
	{
		for(j=0; j<n-i; j++)
		{
			cout<<" ";
		}
		for( k=1; k<=i; k++)
		{
			cout<<"*";
		}
		cout<<endl;
	}
}
void triangle(int x)
{
	triangleRecursion(x,x);
}
int main()
{
	int n;
	cin>>n;
	triangle(n);
	return 0;
}
