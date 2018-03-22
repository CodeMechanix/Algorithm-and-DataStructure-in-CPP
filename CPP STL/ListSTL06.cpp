#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {2,3,5,7,11};

    list<int> mylist(arr,arr+5);
    list<int> :: iterator it;

    //cout<<mylist.front()<<endl;
    //cout<<mylist.back()<<endl;
    mylist.pop_front();
    mylist.pop_back();
    mylist.pop_front();
    mylist.pop_back();

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*(it)<<endl;
    /*
        if(mylist.empty())
            cout<<"Empty"<<endl;
        else
            cout<<"Filled"<<endl;
    */
    return 0;
}




