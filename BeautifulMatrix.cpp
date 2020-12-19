#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a[5][5];
    int i1=-1,j1=-1;
    int ans;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>a[i][j];
            if(a[i][j]==1)
            {
                i1=i;
                j1=j;
            }
        }

    }
    ans=abs(i1-2)+abs(j1-2);
    cout<<ans;
    return 0;
}