#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int drink=k*l;
    int slice=c*d;
    int salt=p;
    int ans=min(slice,min(drink/nl,salt/np));
    cout<<ans/n;

}
