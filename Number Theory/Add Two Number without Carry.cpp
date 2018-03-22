#include<bits/stdc++.h>
using namespace std;
string findSum(string a, string b)
{
    int al=a.size()-1;
    int bl=b.size()-1;
    int carry=0;
    string result="";
    while(al>=0 && bl>=0)
    {
        int temp = (int)(a[al] - '0') + (int)(b[bl] - '0') + carry ;
        carry = 0;
        if(temp > 9 )
        {
            carry=0;
            temp=temp-10;
        }
        result+=char(temp + '0');
        al--;
        bl--;
    }
    while(al>=0)
    {
        int temp = (int)(a[al] - '0') + carry ;
        carry = 0;
        if(temp>9)
        {
            carry=0;
            temp=temp%10;
        }

        result+=char(temp + '0');
        al--;
    }
    while(bl>=0)
    {
        int temp = (int)(b[bl] - '0') + carry ;
        carry = 0;
        if(temp>9)
        {
            carry=1;
            temp=temp%10;
        }

        result+=char(temp + '0');
        bl--;
    }
    if(carry)
        result+="1";
    string addition="";
    for(int i=result.size()-1; i>=0; i--)
        addition+=result[i];   // reversing the answer
    return addition;
}
string trim(string a)   // for removing leading 0
{
    string res="";
    int i=0;
    while(a[i]=='0')
        i++;
    for(; i<a.size(); i++)
        res+=a[i];
    return res;
}
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        string str1;
        string str2;
        cin>>str1>>str2;
        int tmp = atoi(str1.c_str());
        int tmp2 = atoi(str2.c_str());
        if(tmp <= 9 && tmp2<=9)
        {
            cout << findSum(str1, str2)<<endl;
        }
        else
        {
            size_t n = max(str1.size(), str2.size());
            if (n > str1.size())
                str1 = string(n-str1.size(), '0') + str1;
            if (n > str2.size())
                str2 = string(n-str2.size(), '0') + str2;
            string final(n+1, '0');
            char carry = 0;
            string::const_reverse_iterator s1 = str1.rbegin(), e = str1.rend(),
                                           s2 = str2.rbegin();
            string::reverse_iterator f = final.rbegin();
            for (; s1 != e; ++s1, ++s2, ++f)
            {
                char tmp = (*s1-'0')+(*s2-'0') + carry;
                if (tmp > 9)
                {
                    tmp -= 10;
                }
                else
                {
                    carry = 0;
                }
                *f = tmp + '0';
            }
            final[0] = carry + '0';
            n = final.find_first_not_of("0");
            if (n != string::npos)
            {
                final = final.substr(n);
            }
            cout << final << endl;
        }
    }
    return 0;
}


