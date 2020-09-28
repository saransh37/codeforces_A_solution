
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
   int a,b,c;
   cin>>a>>b>>c;
   int g=max(a,max(b,c));
   int l=min(a,min(b,c));
   if(a>l&&a<g)
    cout<<(a-l)+(g-a);
   else if(b>l&&b<g)
    cout<<(b-l)+(g-b);
   else
    cout<<(c-l)+(g-c);

}
