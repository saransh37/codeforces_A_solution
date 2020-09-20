#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int main(){
long long n,m,a;
cin>>n>>m>>a;
//square needed to cover the length of rectangle
long long val1=ceil(float(n)/float(a));
//square needed to cover the width of the rectangle
long long val2=ceil(float(m-a)/float(a))*val1;
long long res=val1+val2;
cout<<res;
}
