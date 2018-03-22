/*
Print n Strings as input and print them in reverse order
Input:                  Output:
3
abc                     ghi
def                     def
ghi                     abc
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100][1000];
    int n;
    scanf("%d",&n);
    for(int i=0; i<n; i++)
        scanf("%s",arr[i]);
    for(int i=n-1; i>=0; i--)
        printf("%s\n",arr[i]);
    return 0;
}
