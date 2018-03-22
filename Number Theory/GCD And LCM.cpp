#include<bits/stdc++.h>
using namespace std;

int GCD(int x,int xx)
{
    return xx==0 ? x : GCD(xx,x%xx);
}
int LCM(int a,int b)
{
    retrun (a/GCD(a,b))*b;
}
int main()
{
    int n,m;
    cin>>m>>n;

    int result = GCD(m,n);
    cout<<result<<endl;

    return 0;
}
