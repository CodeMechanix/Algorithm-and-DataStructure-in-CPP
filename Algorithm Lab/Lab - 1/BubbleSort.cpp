#include<bits/stdc++.h>
using namespace std;
int Array[100];
int main()
{
    int i=0, j=0, range=0, keyElement=0, totalElements=0;
    printf("Number of Elements: ");
    scanf("%d",&totalElements);
    for(i=0; i<totalElements; i++)
    {
        scanf("%d",&Array[i]);
    }
    range = totalElements - 1;
    int k=0;
    for(i=0; i<totalElements-1; i++)
    {
        for(j=0; j<range-i; j++)
        {
            if(Array[j] > Array[j+1])
            {
                k = Array[j];
                Array[j] = Array[j+1];
                Array[j+1]=k;
            }
        }
    }
    printf("After Sorting: \n");
    for(i=0; i<totalElements; i++)
    {
        printf("%d\t",Array[i]);
    }
    return 0;
}
