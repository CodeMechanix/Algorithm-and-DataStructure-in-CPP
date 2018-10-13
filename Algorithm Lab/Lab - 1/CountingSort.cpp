#include <stdio.h>
#include <conio.h>
int n,i,k=0,j,A[1500];
void Counting_sort(int [], int k, int n);
int B[1500], C[1000];
int main()
{
    printf("Enter the number of input : ");
    scanf("%d",&n);
    printf("\nEnter the elements to be sorted :\n");
    for (i=1; i<=n; i++)
    {
        scanf("%d",&A[i]);
        if(A[i] > k)
        {
            k = A[i];
        }
    }
    Counting_sort(A, k, n);
    return 0;
}
void Counting_sort(int A[], int k, int n)
{
    for(i = 0; i <= k; i++)
        C[i] = 0;
    for(j =1; j <= n; j++)
        C[A[j]] = C[A[j]] + 1;
    for(i = 1; i <= k; i++)
        C[i] = C[i] + C[i-1];
    for(j = n; j >= 1; j--)
    {
        B[C[A[j]]] = A[j];
        C[A[j]] = C[A[j]] - 1;
    }
    printf("\nThe Sorted array is : ");
    for(i=1; i<=n; i++)
    {
        printf("%d ",B[i]);
    }
}

