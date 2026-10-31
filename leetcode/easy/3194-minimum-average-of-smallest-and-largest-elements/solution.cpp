class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin() , nums.end());
        int i = 0 , j = nums.size() - 1;
        double m = 60;
        while(i<=j){
            double avg = (nums[i] + nums[j])/2.0;
            m = min(m , avg);
            i++;j--;
        }
        return m;
    }
};