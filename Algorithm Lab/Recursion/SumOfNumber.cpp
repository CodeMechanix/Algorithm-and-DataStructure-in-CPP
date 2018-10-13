#include <stdio.h>
int sum(int num)
{
    if (num!=0)
        return num + sum(num-1);
    else
        return num;
}
int main()
{
    int number, result;
    printf("Enter a Integer Number: ");
    scanf("%d", &number);
    result = sum(number);
    printf("sum = %d", result);
    return 0;
}

