#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n];
  int best[n],worst[n];
  int b=0,w=100000;
  for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>b){
        b=a[i];
        best[i]=b;
    }
    else{
        best[i]=-1;
    }
    if(a[i]<w){
        w=a[i];
        worst[i]=w;
    }
    else{
        worst[i]=-1;
    }
  }
  int res=0;
  for(int i=1;i<n;i++){
    if(a[i]==best[i]||a[i]==worst[i])
        res++;
  }
cout<<res;

}
