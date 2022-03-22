#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        vector<int> x;bool ans=true;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                x.push_back(i);
            }
        }
        for(int i=0;i<(int)x.size()-1;i++)
        {
            if(x[i+1]-x[i]<6)
            ans=false;
        }
        if(ans)
        cout<<"YES\n";
        else
        cout<<"NO\n";
    }
    return 0;
}