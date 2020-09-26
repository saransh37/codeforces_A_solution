#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int p,d;
   cin>>p>>d;
   int val,ones=p%10;
   val=ones;
   int res=0,j=1;
   while(val!=0&&val!=d){
    j++;
    val=(ones*j)%10;
   }
   cout<<j;
}

