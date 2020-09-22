#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin>>n;
  int c,f,res=0;
  while(n--){
    cin>>f>>c;
    if(c-f>=2)
        res++;
  }
  cout<<res;

}
