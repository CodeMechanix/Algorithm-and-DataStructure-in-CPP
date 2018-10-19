#include <cstdio>
int sum = 0;
int addDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    sum = n%10 + addDigits(n/10);
    return sum;
}
int main()
{
    int n, result;
    scanf("%d", &n);
    result = addDigits(n);
    printf("%d\n", result);
    return 0;
}
