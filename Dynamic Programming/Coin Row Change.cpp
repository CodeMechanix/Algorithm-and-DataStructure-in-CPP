#include<bits/stdc++.h>
using namespace std;
int arr[100],Table[100];
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        scanf("%d",&arr[i]);
    }
    Table[0]=0;
    Table[1]=arr[1];
    for(i=2; i<=n; i++)
    {
        Table[i]=max(Table[i-1],Table[i-2]+arr[i]);
    }
    printf("%d\n",Table[n]);
    return 0;
}


