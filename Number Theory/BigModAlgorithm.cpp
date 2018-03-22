#include<bits/stdc++.h>
using namespace std;
long square(long x)
{
    return x*x;
}
long bigmod(long b,long p,long m)
{
    if (p == 0)
        return 1;
    else if (p%2 == 0) // If Even
        return square(bigmod(b,p/2,m)) % m;
    else // If Odd
        return ((b % m) * bigmod(b,p-1,m)) % m;
}
int main()
{
    long a,b,c; // (2^10)%2 ---- (a^b)%b
    while(cin>>a>>b>>c) /
    {
        long sum =  bigmod(a,b,c);
        cout<<sum<<endl;
        sum=0;
    }
    return 0;
}
