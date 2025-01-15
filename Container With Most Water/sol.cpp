class solution{

public:
    int maxWater(vector<int> &arr){
        int left = 0;                     
       int right = arr.size() - 1;       
       int maxw = 0;                     

         while (left < right) {
      
            int width = right - left;
            int height = min(arr[left], arr[right]);
            maxw = max(maxw, width * height);

        
            if (arr[left] < arr[right]) {
            left++;
            } else {
            right--;
            }
        } 

    return maxw;
       

    }

};
