#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <float> mylist;
    mylist.push_back(10);
    mylist.push_back(100);
    mylist.push_front(1);
    mylist.push_front(0);
    mylist.push_back(1000);

    mylist.reverse();
    cout<<mylist.size()<<endl;
    mylist.clear();
    cout<<mylist.empty()<<endl;

    return 0;
}
