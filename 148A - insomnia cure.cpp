#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int k,l,m,n,d;
cin>>k>>l>>m>>n>>d;
int a[d+1]={0};
for(int i=1;i<=d;i++){
   if(i%k==0||i%l==0||i%m==0||i%n==0)
        a[i]=1;
}
int res=0;
for(int i=1;i<=d;i++){
    if(a[i]==0)
        res++;
}
cout<<d-res;
}
