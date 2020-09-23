#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
int a[n];
int min=101,max=0,ind_1,ind_2;
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]>max){
        max=a[i];
        ind_1=i;
    }
    if(a[i]<=min){
        min=a[i];
        ind_2=i;
    }
}
if(ind_1<ind_2)
    cout<<ind_1+(n-1-ind_2);
else//one swap for the max and min number
    cout<<ind_1+(n-1-ind_2)-1;
}

