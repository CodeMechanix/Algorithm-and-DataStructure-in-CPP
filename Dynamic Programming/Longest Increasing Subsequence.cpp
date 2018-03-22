#include <bits/stdc++.h>
using namespace std;
int Table[100][100];
int main()
{
    int n;
    scanf("%d", &n);

    int a[n], b[n];

    for(int i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
        b[i]=a[i];
    }
    sort(b,b+n);

    for(int i=0; i<=n; i++)
    {
        Table[0][i]=0;
    }
    for(int i=0; i<=n; i++)
    {
        Table[i][0]=0;
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            if(b[i-1]==a[j-1])
            {
                Table[i][j]=Table[i-1][j-1]+1;
            }
            else
            {
                Table[i][j]=max(Table[i-1][j], Table[i][j-1]);
            }
        }
    }

    printf("%d\n", Table[n][n]);

    return 0;
}

