class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i : nums){
            sum += i ;
        }
        int leftSum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            int rightSum = sum - leftSum - nums[i];
            if(rightSum == leftSum) return i;
            leftSum += nums[i];
        }
        return -1;
    }
};