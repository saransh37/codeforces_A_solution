#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;
int main(){
 int n;
 cin>>n;
 int temp=n;
 int p;
 int a[4]={0};
 while(temp--){
    cin>>p;
    a[p]++;
 }
sort(a,a+4);
cout<<a[2]+a[1];


}
