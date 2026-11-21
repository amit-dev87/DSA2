class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();

        int count = 0;

        for(int i = 0 ; i < n ; i++){

            long long pro = 1;

            for(int j = i ; j < n ; j++){

                pro *= nums[j];

                if(pro < k){

                    count++;
                }
            }
        }
    return count;
    }
};