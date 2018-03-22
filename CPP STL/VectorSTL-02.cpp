#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vec;
    for (int i = 1; i <= 10; i++)
        vec.push_back(i * 10);

    cout << "Reference operator [vec] : vec[2] = " << g1[2];
    cout << endl;
    cout << "at : vec.at(4) = " << vec.at(4);
    cout << endl;
    cout << "front() : vec.front() = " << vec.front();
    cout << endl;
    cout << "back() : vec.back() = " << vec.back();
    cout << endl;

    return 0;

}
