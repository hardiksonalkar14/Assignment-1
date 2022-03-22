#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,n,i;
	int max;
	cin>>t;
	while(t--){
		cin>>n;
		double avg=0,sum=0;
		int ar[n];
		max=0;int count=0;
		for(i=0;i<n;i++){
			cin>>ar[i];
			if(ar[i]>30) sum+=ar[i];
			else count++;
			if(ar[i]>max) max=ar[i];
		}
		avg=(double)sum/n;
		cout<<count<<" "<<fixed<<setprecision(2)<<avg<<endl;
		for(i=n-1;i>=0;i--) if(max==ar[i])	cout<<i<<" ";
		cout<<endl;
		for(i=0;i<n;i++){
			int x=max-ar[i];
			cout<<x<<endl;
		}
	}
}
