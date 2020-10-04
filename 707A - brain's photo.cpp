
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  char c;
  bool b=true;
  for(int i=0;i<n;i++){
        for(int i=0;i<m;i++){
            cin>>c;
            if(c!='W'&&c!='B'&&c!='G')
                b=false;
        }
  }
  if(b)
    cout<<"#Black&White";
  else
    cout<<"#Color";
}
