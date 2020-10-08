#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int solve(int a[],int n){
 int t[n+1][2];
 t[0][0]=0;
 t[0][1]=0;
 for(int i=1;i<=n;i++){
    t[i][0]=max(t[i-1][0],t[i-1][1]);

    if(a[i-1]>=a[i-2])
        t[i][1]=(t[i-1][1]+1);
    else
        t[i][1]=1;
 }
 return max(t[n][0],t[n][1]);
}

int main(){
  int n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++)
    cin>>a[i];
  cout<<solve(a,n);
}
