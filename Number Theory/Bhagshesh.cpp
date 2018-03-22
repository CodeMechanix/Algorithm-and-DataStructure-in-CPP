#include<bits/stdc++.h>
using namespace std;
char bhajjo[1000000];
long long MOD (char bhajjo[],long long bhajok )
{
    long long i,bhagshesh=0;
    long long ln = strlen(bhajjo);
    for(i=0; i<ln; i++)
    {
        bhagshesh = ((bhagshesh*10) + (bhajjo[i]-'0') )%bhajok; // Amra character theke integer e convert kore nilam '0' biyog kore
    }
    return bhagshesh;
}
int main()
{
    int bhajok;
    cin>>bhajjo;
    cin>>bhajok;
    cout<<MOD(bhajjo,bhajok)<<endl;
    return 0;
}

