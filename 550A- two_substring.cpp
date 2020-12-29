#include<iostream>
#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
#define mod 1000000007
int main(){
 string s;
 cin>>s;
 vector<int>f,se;
 for(int i=0;i<s.length()-1;i++){
    if(s.substr(i,2)=="AB")
        f.push_back(i);
    else if(s.substr(i,2)=="BA")
        se.push_back(i);
 }
 if(f.size()==0||se.size()==0)
    cout<<"NO";
 else{
        int flag=0;

    for(int i=0;i<f.size();i++){
        for(int j=0;j<se.size();j++){
            if((abs(se[j]-f[i])!=1)){
                cout<<"YES";
                flag=1;
                break;
            }
        }
        if(flag)
        break;
    }
    if(flag==0)
    cout<<"NO";

}
 }


