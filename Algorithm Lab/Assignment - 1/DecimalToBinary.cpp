#include <cstdio>
using namespace std;
void BinConvert(int n)
{
    if(n == 0)
        return;
    BinConvert(n/2);
    printf("%d", n%2);
}
int main()
{
    int n;
    scanf("%d",&n);
    BinConvert(n);
    return 0;
}
