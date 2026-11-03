class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int m = INT_MAX;
        int sum = 0 , left = 0;
        for(int right = 0 ; right < nums.size() ; right++){
            sum += nums[right];
            while(sum >= target){
                m = min(m , right - left + 1);
                sum -= nums[left];
                left++;
            }
        }        
        return m == INT_MAX ? 0 : m;
   }
};