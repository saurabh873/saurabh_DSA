class solution{
public:
    int longestSubarray(vector<int>& arr, int k) {
        unordered_map<int,int>mp;
        int count =0;
        int sum=0;
        int temp=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(sum==k){
                temp=max(temp,i+1);
            }
            int target=sum-k;
            if(mp.find(target)!=mp.end()){
                temp=max(temp,i-mp[target]);
            }
            if(mp.find(sum)==mp.end()){
                mp[sum]=i;
            }
          
          
        }
         return temp; 
    }
};