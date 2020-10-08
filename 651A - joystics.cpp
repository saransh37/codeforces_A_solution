#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
int a,b;
cin>>a>>b;
int res=0,f,g=1;
if(a>b)
  f=1;
else
  f=0;
if(a==1&&b==1)
  res=0;
else{
 while(1){
    while(g){
        if(f){
            b=b+1;
            a=a-2;
            res++;
        }
        else{
            a=a+1;
            b=b-2;
            res++;
        }
        if(a<=2||b<=2)
            g=0;

     }
      if(a<=2)
        f=0;
      else
        f=1;
      if(a<=0||b<=0)
        break;
      else
        g=1;
    }
}
cout<<res;
}
