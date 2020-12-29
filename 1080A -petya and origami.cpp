#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
      long long n,k;
      cin>>n>>k;
      long long r=2*n;
       long long g=5*n;
      long long b=8*n;
      long long res=0;
      res+=ceil(float(r)/float(k));
      res+=ceil(float(g)/float(k));
      res+=ceil(float(b)/float(k));
      cout<<res;
}
