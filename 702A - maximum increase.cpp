#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
for(int i=0;i<n;i++)
    cin>>a[i];
int ar[n-1];
for(int i=0;i<n-1;i++){
    ar[i]=a[i]-a[i+1];
}
int res=1,max=0;
for(int i=0;i<n-1;i++){
    if(ar[i]<0)
        res++;
    else
        res=1;
    if(res>max)
        max=res;
}
if(n==1)
    cout<<1;
else
cout<<max;

}
