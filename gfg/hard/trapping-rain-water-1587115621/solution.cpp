class Solution {
  public:
    int maxWater(vector<int> &arr) {
       int n = arr.size();
       int leftMax = 0 , rightMax = 0;
       int left = 0 , right  = n - 1 , ans  = 0;
       while(left < right){
           if(arr[left] < arr[right]){
                if(arr[left] >= leftMax){
                    leftMax = arr[left];
                }else{
                    ans += leftMax - arr[left];
                }
                left++;
            }else{
                if(arr[right] >= rightMax){
                    rightMax = arr[right];
                }else{
                    ans += rightMax - arr[right];
                }
                right--;
            }
        }
        return ans;
    }
};