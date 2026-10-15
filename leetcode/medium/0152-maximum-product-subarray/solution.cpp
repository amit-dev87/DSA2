class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int c=1;
        int m =-10;
        for(int i=0;i<nums.size();i++){
            c*=nums[i];
            m = max (m , c);
            if( c == 0 ){
                c=1;
            }
        }
        c=1;
        for(int i = nums.size()-1 ; i>=0; i--){
            c*=nums[i];
            m = max(m,c);
            if( c == 0 ){
                c=1;
            }
        }
        return m;
    }
};