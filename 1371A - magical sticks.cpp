#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
   int n;
   cin>>n;
   if(n==1)
    cout<<1;
   else  if(n==3)
    cout<<2;
   else if(n%2==0)
    cout<<n/2;
   else
    cout<<n/2+1;
   cout<<"\n";

 }
}
