class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty()){
            return 0;
        }
        set<int>st;
        vector<int>ans;
        for(int num : nums){
            st.insert(num);
        }

        for(auto i : st){
            ans.push_back(i);
        }

        int count = 1;
        int m = 1;

        for(int i = 1 ; i < ans.size() ; i++){
            if(ans[i-1] + 1 == ans[i]){
                count++;
            }else{
                count = 1;
            }
            m = max(m , count);
        }
        return m;
    }
};