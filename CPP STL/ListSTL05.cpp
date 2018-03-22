#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {5,2,1,6,7};

    list <int> mylist (arr,arr+5);
    list<int>::iterator it;
    //it = mylist.begin();
    //mylist.erase(it);
    it = find(mylist.begin(),mylist.end(),1);
    mylist.erase(it);
    /*it = find(mylist.begin(),mylist.end(),6);
    if(it==mylist.end())
        cout<<"Not Found"<<endl;
    else
        cout<<"Found"<<endl;*/

    for(it=mylist.begin(); it!=mylist.end(); it++)
        cout<<*(it)<<endl;

    return 0;
}



