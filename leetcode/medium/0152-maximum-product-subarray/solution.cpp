class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=1;
        int m =0;
        for(int i=0;i<nums.size();i++){
            c*=nums[i];
            m = max (m , c);
        }
        return m;
    }
};