#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
 string s;
 cin>>s;
 string str="hello";
 int j=0;
 for(int i=0;i<s.length();i++){
    if(s[i]==str[j]){
        j++;
    }
 }
 if(j==5)
    cout<<"YES";
 else
    cout<<"NO";
}
