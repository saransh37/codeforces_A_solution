#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  string g,h,d;
  cin>>g>>h>>d;
  int a[26]={0};
  for(int i=0;i<g.length();i++){
    a[g[i]-65]++;
  }
  for(int i=0;i<h.length();i++){
    a[h[i]-65]++;
  }
  for(int i=0;i<d.length();i++){
    a[d[i]-65]--;
  }
  int f=1;
  for(int i=0;i<26;i++){
    if(a[i]!=0){
        cout<<"NO";
        f=0;
        break;
    }
  }
  if(f)
    cout<<"YES";
}
