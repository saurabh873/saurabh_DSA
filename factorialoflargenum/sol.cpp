#include<iostream>
#include<vector>
using namespace std;

void sol(int &a ){
    vector<int>res(1,1);
    int carry=0;
    for(int i=2;i<=a;++i){
        for(int j=0;j<res.size();j++){
            int pro=res[j]*i+carry;
            res[j]=pro%10;
            carry=pro/10;
        }
        while(carry){
            res.push_back(carry%10);
            carry=carry/10;
            
        }
    }
    for(int i=res.size()-1;i>=0;--i){
        cout<<res[i];
    }
}
int main(){
    int a;
    cin>>a;
    sol(a);
}
