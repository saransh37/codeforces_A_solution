#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
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
   int f=1;
   for(int i=0;i<n-1;i++){
    if(!(abs(a[i]-a[i+1])<=1)){
        f=0;
        break;
    }
   }
   if(f)
    cout<<"YES"<<"\n";
   else
    cout<<"NO"<<"\n";
    }
}


