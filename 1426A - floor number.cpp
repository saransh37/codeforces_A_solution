#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n,x;
   cin>>n>>x;
   int res;
   if(n==1||n==2)
    res=1;
   else{
    res=1;
    int val=2;
    while(val<n){
        val=val+x;
        res++;
    }
   }
   cout<<res<<"\n";
    }
}
