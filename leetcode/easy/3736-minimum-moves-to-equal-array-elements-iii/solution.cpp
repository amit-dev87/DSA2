class Solution {
public:
    int minMoves(vector<int>& nums) {
        int m = INT_MIN;
        for(int i : nums){
            m = max(m , i);
        }
        int sum = 0 ;
        for(int i : nums){
            sum += m - i;
        }
        return sum;
    }
};