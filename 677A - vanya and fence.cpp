#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n,h;
   cin>>n>>h;
   int res=0;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>h)
        res+=2;
    else
        res++;
   }
   cout<<res;

}
