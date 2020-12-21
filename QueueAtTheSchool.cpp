#include<bits/stdc++.h>
using namespace std;
string solve(string str,int t)
{
    int c=0;
    while(c!=t)
    {
        int head=0;
        int tail=1;
        for(int i=0;i<str.length();i++)
        {
            if(head>=str.length() || tail>=str.length()) break;
            if(str[head]=='B' && str[tail]=='G')
            {
                char temp=str[head];
                str[head]=str[tail];
                str[tail]=temp;
                head+=2;
                tail+=2;
            }
            else
            {
               head++;
               tail++;
            }
        }
        c++;
    }
    return str;
}
int main()
{
    int n,t;
    cin>>n>>t;
    string str,new_str;
    cin>>str;
    new_str=solve(str,t);
    cout<<new_str;
    return 0;
}

