#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[4],cnt=0;;
for(int i=0;i<4;i++){
    cin>>a[i];
    if(i!=0){
        for(int j=0;j<i;j++){
            if(a[j]==a[i]){
                cnt++;
                break;}
        }
    }
}
cout<<cnt;
}

