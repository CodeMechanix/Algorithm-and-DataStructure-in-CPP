#include<bits/stdc++.h>
#define N 100000000
int Table[N];
using namespace std;

void SieveOfEratosthenes()
{
    int i=2;
    for(; i<=N; ++i)
        Table[i]=1;

    Table[0] = Table[1] = 0;

    int len = sqrt(N);

    for( i=2; i<=len; i++)
    {
        if(Table[i])
        {
            for(int k = i*i; k<=N; k+=i)
                Table[k]=0;
        }
    }
    Table[2]=0;
}
int main()
{
    SieveOfEratosthenes();
    int n;
    while(scanf("%d",&n))
    {
        if(n==0)
            break;
        else
        {
            printf("%d",2);
            for(int a=3; a<=n; a++)
            {
                if(Table[a])
                {
                    printf(" %d",a);
                }
            }
            printf("\n");
        }
    }
    return 0;
}
