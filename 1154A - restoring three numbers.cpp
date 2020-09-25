#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int x,y,z,w;
  cin>>x>>y>>z>>w;
  int big;
  big=max(max(x,y),max(z,w));
  if(big-x!=0)
    cout<<big-x<<" ";
  if(big-y!=0)
    cout<<big-y<<" ";
  if(big-z!=0)
    cout<<big-z<<" ";
  if(big-w!=0)
    cout<<big-w<<" ";


}
