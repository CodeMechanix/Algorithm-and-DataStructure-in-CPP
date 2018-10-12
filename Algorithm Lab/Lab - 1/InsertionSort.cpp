#include<bits/stdc++.h>
using namespace std;
int Array[100];
int main()
{
    int i=0, j=0,  keyElement=0, totalElements=0;
    printf("Number of Elements: ");
    scanf("%d",&totalElements);
    /// Array Index Start from 1 to totalElements
    for(i=1; i<=totalElements; i++)
    {
        scanf("%d",&Array[i]);
    }
    int k=0;
    for(i=1;i<=totalElements; i++)
    {
		k = Array[i];
		j = i-1;
		while(j>=1 && Array[j] >k)
		{
			Array[j+1] = Array[j];
			j--;
		}
		Array[j+1] = k;
    }
    printf("After Sorting: \n");
    for(i=1; i<=totalElements; i++)
    {
        printf("%d\t",Array[i]);
    }
    return 0;
}
