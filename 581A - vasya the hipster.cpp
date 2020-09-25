#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b;
   cin>>a>>b;
   int d=0;
   int s=0;
   if(a>b){
    d=b;
    s=(a-b)/2;
   }
   else{
    d=a;
    s=(b-a)/2;
   }
   cout<<d<<" "<<s;
}
