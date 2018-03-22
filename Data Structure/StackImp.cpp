#include<bits/stdc++.h>
using namespace std;
# define sz 1000
bool temp = true;
int arr[sz],top=0;
void Push(int var)
{
    if(top==sz)
        printf("Stack Is Full\n");

    arr[top++] = var;
    printf("After Inserting value The Stack OutLook:\n");
    for(int i=0; i<top; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void Pop()
{
    top--;
    if(top<=0)
        printf("Stack Is Empty\n");
    else
    {
        printf("After Pop The Stack OutLook:\n");
        for(int i=0; i<top; i++)
            printf("%d ",arr[i]);
        printf("\n");
    }
}
void Sort(int arr[])
{
    if(top == 0)
        printf("Stack Is Empty");
    sort(arr,arr+top);
    printf("After Sorting value The Stack OutLook:\n");
    for(int i=0; i<top; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
void Search(int degit)
{
    int Start = 0;
    int End = top;
    do
    {
        int Mid = (int)((Start+End)/2);
        if(arr[Mid]==degit)
        {
            printf("Found Index in %d\n",Mid+1);
            break;
        }
        if(arr[Mid]<degit)
            Start = Mid +1;
        if(arr[Mid]>degit)
            End = Mid -1;
    }
    while(Start<=End);
    if(Start>End)
    {
        printf("Not Found\n");
    }
}
int main()
{
    while(1)
    {
        if(temp==false)
        {
            printf("Exit!");
            break;
        }
        printf("\n*****Stack Implement*****\n");
        printf("01. Insert Value\n");
        printf("02. Delete Value\n");
        printf("03. Sort All Value\n");
        printf("04: Search Particular Element\n");
        printf("05: Exit\n");
        int num,var;
        scanf("%d",&num);
        switch(num)
        {
        case 1:
            printf("Insert The Value: ");
            scanf("%d",&var);
            Push(var);
            break;
        case 2:
            Pop();
            break;
        case 3:
            Sort(arr);
            break;
        case 4:
            int degit;
            printf("Please Sort the Stack First Then Search Because Its Binary Search..\n");
            printf("Which Value You Want to Know the Index Number: ");
            scanf("%d",&degit);
            Search(degit);
            break;
        case 5:
            temp = false;
            break;
        }
    }
    return 0;
}
