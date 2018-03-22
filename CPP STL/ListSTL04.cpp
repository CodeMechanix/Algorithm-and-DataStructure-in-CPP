#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5,2,1,6,7};

    list <int> mylist (arr,arr+5);
    list<int>::iterator it;
    //it = mylist.begin();
    //it++;
    //cout<<*it<<endl;
    //mylist.insert(it,7);
    it = find(mylist.begin(),mylist.end(),6);
    cout<<*it<<endl;
    mylist.insert(it,7);
    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*(it)<<endl;

    return 0;
}


