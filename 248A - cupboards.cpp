#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int  n;
  cin>>n;
  int open_r=0,open_l=0,closed_r=0,closed_l=0;
  int a[2*n];
  int l,r;
  for(int i=0;i<n;i++){
    cin>>l>>r;
    if(l==0)
        closed_l++;
    else
        open_l++;
    if(r==0)
        closed_r++;
    else
        open_r++;
  }
  int res=(min(closed_l,open_l)+min(closed_r,open_r));
  cout<<res;
}
