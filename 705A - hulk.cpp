#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int f=0;
while(n){
    if(n==1){
        if(f==0)
           cout<<"I hate it";
        else
           cout<<"I love it";
    }
    else{
        if(f==0){
           cout<<"I hate that ";
           f=1;
        }
        else{
           cout<<"I love that ";
           f=0;
        }
     }
     n-=1;
}
}
