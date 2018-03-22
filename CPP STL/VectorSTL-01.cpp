#include<bits/stdc++.h>
#define sz 5
using namespace std;
int main()
{
    vector <int> IntVec;
    vector <int> :: iterator itr;
    vector <int> :: reverse_iterator rItr;
    int num;
    // Input In Vector
    for(int i=1; i<=sz; i++)
    {
        cin>>num;
        IntVec.push_back(num);
    }
    // Iterator Pointing to the First to last elements of Vector
    cout<<"Output of Begin to End :"<<endl;
    for(itr = IntVec.begin(); itr != IntVec.end(); ++itr)
        cout<<*itr<<endl;
    // Iterator Pointing to the Last to First elements of Vector
    cout<<"Output of rBegin to rEnd :"<<endl;
    for(rItr = IntVec.rbegin(); rItr != IntVec.rend(); ++rItr)
        cout<<*rItr<<endl;
    // Find Size of Vector
    cout<<"Size: "<<IntVec.size()<<endl;
}
