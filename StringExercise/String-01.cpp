// String and Char Difference
#include<bits/stdc++.h>
using namespace std;
// String Terminating Char thake ['\0']
//char array te kono terminating char thake na
int main()
{
    char ch[10],i=0;
    ch[0] = 'U';
    ch[1] = 'A';
    ch[2] = 'P';
    ch[3] = 'C';
    ch[4] = 'S';
    ch[5] = 'E';
    while(ch[i]!='C')
    {
        printf("%c\n",ch[i]);
        i++;
    }
    return 0;
}
