#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,xi,yi,zi;
    int x=0,y=0,z=0;
    cin>>n;
    while(n--)
    {
        cin>>xi>>yi>>zi;
        x+=xi;
        y+=yi;
        z+=zi;
    }
    if(x==0 && y==0 && z==0) cout<<"YES";
    else cout<<"NO";
    return 0;
}