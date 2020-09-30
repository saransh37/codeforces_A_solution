#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int a[n];
   int c=0,bic=0,bac=0;
   int f=0;
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(f==0){
        c+=a[i];
        f=1;
    }
    else if(f==1){
        bic+=a[i];
        f=2;
    }
    else if(f==2){
        bac+=a[i];
        f=0;
    }
   }

   int res=max(c,max(bic,bac));
   if(res==c)
    cout<<"chest";
   else if(res==bic)
    cout<<"biceps";
   else
    cout<<"back";
}
