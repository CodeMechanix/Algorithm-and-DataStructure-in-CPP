#include<bits/stdc++.h>
using namespace std;
int main()
{
    string data;
    cin>>data;
    transform(data.begin(), data.end(), data.begin(), ::tolower);
    cout<<data<<endl;
    return 0;
}

