
class Solution {
  public:
    int findDiff(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }

        if(mp.size() == 1) return 0;

        int maxi = INT_MIN;
        int mini = INT_MAX;

        for(auto it : mp) {
            maxi = max(maxi, it.second);
            mini = min(mini, it.second);
        }

        return maxi - mini;
    }
};
