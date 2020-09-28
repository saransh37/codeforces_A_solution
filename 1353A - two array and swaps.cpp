#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
    int n,k;
    cin>>n>>k;
    int a[n],b[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
        cin>>b[i];
    sort(a,a+n);
    sort(b,b+n);
    int res=0;
    int i=0;
    while(a[i]<b[n-i-1]&&k--){
        res=res+b[n-1-i];
        i++;
    }
    for(int j=i;j<n;j++){
        res=res+a[j];
    }
    cout<<res<<"\n";


   }
}
