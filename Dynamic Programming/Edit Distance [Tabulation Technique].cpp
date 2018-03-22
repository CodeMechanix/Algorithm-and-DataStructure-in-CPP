// Edit Distance Dynamic Programing
// Tabulation Technique
#include<bits/stdc++.h>
using namespace std;
char A[2000+10],B[2000+10];
int dp[2000+10][2000+10];
int main()
{
    int i,j,l1,l2;
    scanf("%s",A);
    scanf("%s",B);

    l1=strlen(A);
    l2=strlen(B);

    for(i=0; i<=l2; i++)
    {
        dp[0][i]=i;
    }

    for(i=0; i<=l1; i++)
    {
        dp[i][0]=i;
    }

    for(i=1; i<=l1; i++)
    {
        for(j=1; j<=l2; j++)
        {

            if(A[i-1]==B[j-1])
            {
                dp[i][j]=dp[i-1][j-1];
            }
            else
            {
                dp[i][j]=min(dp[i][j-1],min(dp[i-1][j-1],dp[i-1][j]))+1;
            }
        }
    }
    printf("%d\n",dp[l1][l2]);
    return 0;
}

