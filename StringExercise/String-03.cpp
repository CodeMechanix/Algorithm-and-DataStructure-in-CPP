/*
Take String as Input and Print Them. The Program will exit input string is Empty
    Sample Input                    Sample Output
        CSE                                   CSE
        UAP                                   UAP
        Dhaka                                Dhaka
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[100];
    bool tmp = true;
    while(tmp!=false)
    {
        gets(arr);
        if(arr[0]=='\0') // '\0' - Null char
            tmp = false;
        printf("%s\n",arr);
    }
    return 0;
}
