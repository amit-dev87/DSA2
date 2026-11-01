class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] == nums[(i+1)%nums.size()] || nums[i] == nums[(i+2)%nums.size()]){
                return nums[i];
            }
        }
        return -1;
    }
};