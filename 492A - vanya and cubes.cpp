#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int res=0;
   int i=1;
   int sum=0;
   while(1){
    for(int j=1;j<=i;j++){
        sum+=j;
    }
    if(sum<=n)
        res++;
    else
        break;
    i++;
   }
   cout<<res;
 }
