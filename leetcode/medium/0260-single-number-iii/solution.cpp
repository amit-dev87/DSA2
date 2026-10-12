class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    vector<int>ans;
    unordered_map<int,int>freq;
    for(int num:nums){
          freq[num]++;
    }
    for(int n : nums){
        if(freq[n]==1){
            ans.push_back(n);
        }
    }
    return ans;
    }
};