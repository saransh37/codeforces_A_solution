
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int a[n+1];
  int c1=0,c2=0,c3=0;
  vector<int>v1,v2,v3;
  for(int i=1;i<=n;i++){
    cin>>a[i];
    if(a[i]==1){
        c1++;
        v1.push_back(i);
    }
    else if(a[i]==2){
        c2++;
        v2.push_back(i);
    }
    else if(a[i]==3){
        c3++;
        v3.push_back(i);
    }

  }

  int t=min(c1,min(c2,c3));
  cout<<t<<"\n";
  int i=0;
  while(t--){
    cout<<v1[i]<<" "<<v2[i]<<" "<<v3[i]<<"\n";
    i++;
  }
}
