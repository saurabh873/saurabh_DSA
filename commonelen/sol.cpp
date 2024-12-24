#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a={1,2,3,4,5,6};
    vector<int>b={2,3,4,5,6,7};
    vector<int>c={3,4,5,6,7,8};
    unordered_map<int,int>mp;
    for(auto x: a){
        mp[x]=1;
    }
    for(auto x: b){
        if(mp.find(x)!=mp.end() && mp[x]==1){
            mp[x]=2;
        }
    }
    cout<<" these are common elements"<<endl;
    for(auto x: c){
        if(mp.find(x)!=mp.end() && mp[x]==2){
       
            cout<<x<<" ";
        }
        
    }
    
}