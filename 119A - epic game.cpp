#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
if(a==0||b==0)
    return max(a,b);
else if(a==1||b==1)
    return 1;
else if(a==b)
    return a;
else if(a>b)
    return gcd(b,a-b);
else
    return gcd(b,a);
}
int main(){
    int a,b,n;
    cin>>a>>b>>n;
    int f=0;
    while(1){
    int val1=gcd(a,n);
    int val2=gcd(b,n);
        if(f==0&&val1<=n){
            n=n-val1;
            f=1;
        }
        else if(f==1&&val2<=n){
            n=n-val2;
            f=0;
        }
        else
            break;
    }
    if(f==0)
        cout<<1;
    else
        cout<<0;
}
