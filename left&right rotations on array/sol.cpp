#include<iostream>
using namespace std;


 void reversearr( int arr[],int start,int end){
     
     while(start<end){
         swap(arr[start],arr[end]);
         start++;
         end--;
     }
 }

int main(){
    cout<<"enter the array size"<<endl;
    int a;
    cin>>a;
   
    if(a%2==0)
    {
        int arr[a];
        cout<<" enter the array"<<endl;
        for(int i=0;i<a;i++)
        {
            cin>>arr[i];
            
        }
        cout<<" enter the  any no. for  rotations"<<endl;
        int k;
        cin>>k;
        int temp=a/2;
        k=k%temp;
        if(k==0){
            for(int i=0;i<a;i++){
             cout<<arr[i];
        }
        }
        else{
            reversearr(arr,0,temp-1);
        reversearr(arr,0,k-1);
        reversearr(arr,k,temp-1);
        reversearr(arr,temp,a-1);
        reversearr(arr,a-k+1,a-1);
        reversearr(arr,temp,a-k);
        for(int i=0;i<a;i++){
             cout<<arr[i];
        }
        }
        
        
         
         
         
        
        
        
        
        
        
    }
     
    
        
   
}