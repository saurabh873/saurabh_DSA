#include<iostream>
using namespace std;
int main(){
    int size;
    cin>>size;
    string a;
   
    cout<<"enter string"<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
     cout<<" converatble string "<<endl;
    
    for(int i=0;i<size;i++){
    
       
        if(!isalpha(a[i])){

            int num=a[i]-'0';
           
            if(num==9){
                char lm=0+'0';
                a[i]=lm;
            }
            else{
                num=num+1;
                char lm=num+'0';
                a[i]=lm;
            }
           
            
        }
    }
    for(int i=0;i<size;i++){
        cout<<a[i];
    }
}