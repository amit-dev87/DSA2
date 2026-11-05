class Solution {
public:
    void getPerms(vector<int>&nums , int idx , set<vector<int>>&st){
        if(idx == nums.size()) st.insert({nums});
        for(int i = idx ; i < nums.size() ; i++){
            swap(nums[idx] , nums[i]);
            getPerms(nums,idx + 1 , st);
            swap(nums[idx] , nums[i]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        set<vector<int>>st;
        vector<vector<int>>ans;
        getPerms(nums , 0 , st);
        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};