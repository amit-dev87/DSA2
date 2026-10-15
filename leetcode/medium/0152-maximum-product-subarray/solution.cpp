class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=1;
        int m =-10;
        if(nums.size()==1){
            return nums[0];
        }
        for(int i=0;i<nums.size();i++){
            c*=nums[i];
            m = max (m , c);
            if(c<0){
                c=1;
            }
        }
        if(m==0){
            for(int i=0;i<nums.size();i++){
                m = max(m,nums[i]);
            }
        }
        return m;
    }
};