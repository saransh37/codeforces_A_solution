#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
   }
   int res=0;
   int man=0;
   for(int i=0;i<n;i++){
    if(man==0&&a[i]==-1){
        res++;
    }
    else if(a[i]>0){
        man+=a[i];
    }
    else if(man>0&&a[i]==-1){
        man--;
    }
    if(man<0)
        man=0;
   }
   cout<<res;
}
