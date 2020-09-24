#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int m;
cin>>m;
int res=0;
while(m){
    if(m>=100){
        res=res+m/100;
        m%=100;
    }
    else if(m>=20){
        res=res+m/20;
        m%=20;
    }
    else if(m>=10){
        res=res+m/10;
        m%=10;
    }
    else if(m>=5){
        res=res+m/5;
        m%=5;
    }
    else{
        res+=m;
        m=0;}
}
cout<<res;
}
