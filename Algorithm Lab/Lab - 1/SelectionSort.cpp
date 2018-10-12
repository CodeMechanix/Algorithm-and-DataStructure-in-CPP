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
    for(i=1; i<=totalElements; i++)
    {
        for(j=i+1; j<=totalElements; j++)
        {
            if(Array[i] > Array[j])
            {
                swap(Array[i], Array[j]);
            }
        }
    }
    printf("After Sorting: \n");
    for(i=1; i<=totalElements; i++)
    {
        printf("%d\t",Array[i]);
    }
    return 0;
}
