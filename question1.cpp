#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter the rank ";
    cin>>n;
    if (n<=50)
    {
        cout<<"100%";
    }
    else if(n>=50 && n<=100)
    {
        cout<<"50%";
    }
    else
    {
        cout<<"No scholarship";
    }
    return 0;
    
}