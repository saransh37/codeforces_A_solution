#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n+1]={0};
int p;
cin>>p;n
int x[p];
for(int i=0;i<p;i++){
    cin>>x[i];
    a[x[i]]=1;
}
int q;
cin>>q;
int y[q];
for(int i=0;i<q;i++){
    cin>>y[i];
    a[y[i]]=1;
}
int f=1;
for(int i=1;i<=n;i++){
    if(a[i]==0){
        cout<<"Oh, my keyboard!";
        f=0;
        break;
    }
}
if(f)
    cout<<"I become the guy.";
}
