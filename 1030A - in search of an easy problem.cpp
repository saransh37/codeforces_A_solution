#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int res=0;
   int a[n];
   for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1)
        res=1;
   }
   if(res)
    cout<<"HARD";
   else
    cout<<"EASY";

}
