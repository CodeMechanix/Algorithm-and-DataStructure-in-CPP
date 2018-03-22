#include<bits/stdc++.h>
using namespace std;
int a[100],Table[100][100];
int main()
{
    int i,j,n,w;
    scanf("%d",&n);
    scanf("%d",&w);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<=w;i++)
    {
        Table[0][i]=i;
    }

    for(i=1;i<n;i++)
    {
        for(j=0;j<=w;j++)
        {
            if(a[i]>j)
            {
                Table[i][j]=Table[i-1][j];
            }
            else
            {
                Table[i][j]=min(Table[i-1][j],Table[i][j-a[i]]+1);
            }
        }
    }
    printf("%d",Table[n-1][w]);
    return 0;
}

