#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int n;
   cin>>n;
   int c=0,m=0;
   int a,b;
   while(n--){
    cin>>a>>b;
    if(a>b)
        m++;
    else if(a<b)
        c++;
   }
   if(m>c)
    cout<<"Mishka";
    else if(m<c)
    cout<<"Chris";
   else
    cout<<"Friendship is magic!^^";
}
