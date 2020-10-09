#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int t;
 cin>>t;
 while(t--){
 long long n;
 cin>>n;
 long long res=0;
 int f=0;
 while(n){
    if(f==0){
     if(n%2==0){
        if((n/2)%2!=0||n==4){
            res+=n/2;
            n/=2;
        }
        else{
            res++;
            n-=1;
        }
     }
     else{
        res++;
        n-=1;
     }
     f=1;
  }
  else{
   if(n%2==0){
        if((n/2)%2!=0||n==4)
           n/=2;
        else
            n-=1;
   }
     else
        n-=1;
    f=0;
  }
}
cout<<res<<"\n";
 }
}
