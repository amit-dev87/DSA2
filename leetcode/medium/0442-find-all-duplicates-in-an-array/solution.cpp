class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i : nums){
            freq[i]++;
            if(freq[i] == 2){
                ans.push_back(i);
            }
        }
    return ans;
    }
};