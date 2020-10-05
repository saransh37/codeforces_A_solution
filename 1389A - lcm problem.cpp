#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
 if (a==b)
    return a;
 else if(a==0||b==0)
    return max(a,b);
 else if(a==1||b==1)
    return 1;
 else if(a>b)
    return gcd(b,a%b);
 else
    return gcd(b,a);
}
int  lcm(int a,int b){
return (a*b)/gcd(a,b);
}
int main(){
    int t;
    cin>>t;
    while(t--){
  int l,r;
  cin>>l>>r;
  int val=lcm(l,r);
  int x,y;
  if(val==r||l==1){
    x=l;
    y=r;
  }
  else if(r>=2*l){
    x=l;
    y=2*l;
  }
  else{
    x=-1;
    y=-1;
  }
  cout<<x<<" "<<y<<"\n";
}
}



