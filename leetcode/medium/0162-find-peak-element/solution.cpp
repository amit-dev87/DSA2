class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        if(nums.size()==1){return 0;};
        if(nums[0]>nums[1]){return 0;};
        if(nums[nums.size()-1]>nums[nums.size()-2]){return nums.size()-1;};
        int i=0,j=1,k=2;
        while(k!=nums.size()){
            if(nums[i]<nums[j] && nums[k]<nums[j]){
                return j;
            }else{
                i++;j++;k++;
            }
        }
        return -1;
    }
};