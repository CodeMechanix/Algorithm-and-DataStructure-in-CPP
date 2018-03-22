// String Output [ printf , puts ]
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char arr[1000];
    gets(arr);
    puts(arr); // string output দিবে
    printf("%8.4s\n",arr); // যে স্ট্রিং টা প্রিন্ট করবো সেটা ৮ ঘর ব্যাপী থাকবে
    printf("%*.*s\n",8,3,arr); // আগের টার মতো একয় কাজ করবে
    /*
    Input           Output
    UAP           [ 5 Space ]UAP
    Hasan         [ 5 Space ]Has
    */
    return 0;
}
