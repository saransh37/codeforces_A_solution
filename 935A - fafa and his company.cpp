#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int i=1,res=0;
   while(i<=n/2){
    if((n-i)%i==0)
        res++;
        i++;
   }
   cout<<res;
 }
