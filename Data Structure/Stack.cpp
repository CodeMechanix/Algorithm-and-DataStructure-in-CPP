#include<bits/stdc++.h>
#define Limit 1000
int arr[Limit];
int top = 0;
void push(int val);
void pop();
void printlist();
int main()
{
    int num,value;
    bool Break_Up = false;
    while(true)
    {
        printf("Enter your choice:\n");
        printf("1. Insert Value In Stack\n");
        printf("2. Delete Value From Stack\n");
        printf("3. Display Stack Current value\n");
        printf("4. Exit....\n");
        scanf("%d",&num);

        switch(num)
        {
        case 1:
            scanf("%d",&value);
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            printlist();
            break;

        case 4:
            Break_Up=true;
            break;
        }

        if(Break_Up==true)
            break;
    }
    return 0;
}
void push(int val)
{
    if(top>=Limit)
        printf("Stack Overflow Now.\n");
    else
        arr[top++]=val;
}

void pop()
{
    if(top<=0)
    {
        printf("Stack is empty\n");
    }
    else
    {
        top--;
        printf("Popped Element from stack: %d\n",arr[top]);
    }
}

void printlist()
{
    int i;
    for(i=0; i<top; i++)
        printf("%d ",arr[i]);
    printf("\n");
}
