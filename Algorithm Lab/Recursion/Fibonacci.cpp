#include <stdio.h>
int fibonacci(int i)
{
    if(i == 0)
    {
        return 0;
    }
    if(i == 1)
    {
        return 1;
    }
    return fibonacci(i-1) + fibonacci(i-2);
}
int  main()
{
    int i,targetNum;
    scanf("%d",&targetNum);
    for (i = 0; i < targetNum; i++) /// 1 to targetNum fibonacci number sequence
    {
        printf("%d\t\n", fibonacci(i));
    }
    return 0;
}
