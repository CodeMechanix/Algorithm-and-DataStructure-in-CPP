#include<bits/stdc++.h>
using namespace std;
int w[100],c[100],mat[100][100];
int main()
{
    int k,n,i,j;
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        scanf("%d",&w[i]);
    }
    for(i=1; i<=n; i++)
    {
        scanf("%d",&c[i]);
    }

    scanf("%d",&k);

    for(j=0; j<=k; j++)
    {
        mat[0][i]=0;
    }
    for(j=0; j<=n; j++)
    {
        mat[i][0]=0;
    }

    for(i=1; i<=n; i++)
    {
        for(j=1; j<=k; j++)
        {
            if(w[i]>j)
            {
                mat[i][j]=mat[i-1][j];
            }
            else
            {
                mat[i][j]=max(mat[i-1][j],mat[i-1][j-w[i]]+c[i]);
            }
        }
    }
    printf("%d",mat[n][k]);
    return 0;
}

