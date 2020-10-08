#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,v;
  cin>>n>>v;
  int trip=n-1;
  int money;
  if(trip>=v)
    money=v;
  else
    money=trip;
  int i=2;
  while(trip>v){
    trip--;
    money+=i;
    i++;
  }
  cout<<money;
}
