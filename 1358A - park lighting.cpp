#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int t;
   cin>>t;
   while(t--){
      int n,m;
      cin>>n>>m;
      int res=0;
      if(m%2==0)
        res=n*(m/2);
      else{
            if(n%2==0)
        res=n*(m/2)+n/2;
      else
        res=n*(m/2)+n/2+1;
      }
     cout<<res<<"\n";
   }
}
