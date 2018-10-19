#include<bits/stdc++.h>
using namespace std;
void triangleRecursion(int x, int original)
{
	if(x<=0) return;
	triangleRecursion(x-1, original);
	for(int i=0; i<(original-x); i++)
	{
		cout<<" ";
	}
	for(int i=0; i<x; i++){
		cout<<"* ";
	}
	cout<<endl;
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
