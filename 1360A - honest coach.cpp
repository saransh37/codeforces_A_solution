#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int res=1000;
    for(int i=0;i<n-1;i++){
        int val=a[i+1]-a[i];
        res=min(res,val);
    }
    cout<<res<<"\n";
}
}
