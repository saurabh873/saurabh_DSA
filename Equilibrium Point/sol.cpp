class Solution {
  public:
    // Function to find equilibrium point in the array.
    int findEquilibrium(vector<int> &arr) {
       int left=0;
       int right=0;
       for(int i=0;i<arr.size();i++){
           right+=arr[i];
       }
       for(int i=0;i<arr.size()-1;i++){
           right-=arr[i];
           if(left==right) return i;
           left+=arr[i];
       }
       return -1;
        
        
        
    }
};