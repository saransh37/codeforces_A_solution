#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  if(n%2!=0)
  cout<<0;
  else
  cout<<(1<<(n/2));//pow(2,n/2)
}
