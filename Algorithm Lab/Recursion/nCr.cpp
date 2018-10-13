#include<bits/stdc++.h>
using namespace std;
long long int nCr(int n , int r)
{
    if(n == r || r == 0)
        return 1;
    return nCr(n-1,r-1)+nCr(n-1,r);
}
int main()
{
    int t,n,r;
    scanf("%d%d",&n,&r);
    printf("%lld\n",nCr(n,r));
    return 0;
}
