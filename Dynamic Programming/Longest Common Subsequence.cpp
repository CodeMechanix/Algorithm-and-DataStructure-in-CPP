#include <bits/stdc++.h>
using namespace std;
int Table[100][100];
char a[100],b[100];
int main()
{
    int n;

    scanf("%s", &a);
    scanf("%s", &b);

    int la=strlen(a);
    int lb=strlen(b);

    for(int i=0; i<=la; i++)
    {
        Table[0][i]=0;
    }
    for(int i=0; i<=lb; i++)
    {
        Table[i][0]=0;
    }

    for(int i=1; i<=lb; i++)
    {
        for(int j=1; j<=la; j++)
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

    printf("%d\n", Table[lb][la]);

    return 0;
}

