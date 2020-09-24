#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
int n;
cin>>n;
int a[n+1];
a[0]=0;
a[1]=1;
int val=4;
for(int i=2;i<n+1;i++){
    a[i]=a[i-1]+val;
    val+=4;
}
cout<<a[n];
}
