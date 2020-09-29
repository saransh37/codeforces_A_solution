#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    a[i]=pow(2,i+1);
   }
   int val1=0,val2=0;
   for(int i=0;i<n/2-1;i++){
    val1=val1+a[i];
   }
   val1+=a[n-1];
   for(int i=n/2-1;i<n-1;i++){
    val2=val2+a[i];
   }
   cout<<val1-val2<<"\n";
}
}
