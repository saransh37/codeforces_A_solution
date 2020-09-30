#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,k;
  cin>>n>>k;
  int res=0;
  int dig=0,val;
  while(n--){
    cin>>val;
    dig=0;
    while(val){
        int rem=val%10;
        if(rem==4||rem==7)
            dig++;
        val/=10;
    }
    if(dig<=k)
        res++;

  }
  cout<<res;
}
