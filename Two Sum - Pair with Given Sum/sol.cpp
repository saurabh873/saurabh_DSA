// User function template for C++
class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++){
             int c=target-arr[i];
            if(mp.find(c)!=mp.end()){
                return true;
                
                
            }
            else{
               mp[arr[i]]++; 
            }
            
        }
         return false;
    }
};