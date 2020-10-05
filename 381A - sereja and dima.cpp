#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int  n;
  cin>>n;
  int a[n];
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int s=0,d=0;
  int i=0,j=n-1,f=1;;
  while(n){
        int val;
    if(a[i]>a[j]){
        val=a[i];
        i++;
    }
    else{
        val=a[j];
        j--;
    }
    if(f){
        s+=val;
        f=0;
    }
    else{
        d+=val;
        f=1;
    }
    n--;
  }
  cout<<s<<" "<<d;
}
