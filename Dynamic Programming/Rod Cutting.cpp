#include <bits/stdc++.h>
using namespace std;

#define mx 10000
int price[mx],dp[mx],sol[mx];

int solve(int N)
{
    dp[0]=0;
    for(int i=1; i<=N; i++)
    {
        int q = -mx;
        for(int j=1; j<=i; j++)
        {
            if(q<price[j]+dp[i-j])
            {
                q = price[j] + dp[i-j];
                sol[i]=j;
            }
        }
        dp[i]=q;
    }
    return dp[N];
}

void printSolution(int N)
{
    while(N>0)
    {
        printf("%d ",sol[N]);
        N=N-sol[N];
    }
}

int main()
{
    int N;
    scanf("%d",&N);
    for(int i=1; i<=N; i++)
        scanf("%d",&price[i]);
    printf("%d\n",solve(N));
    printSolution(N);
    return 0;
}

