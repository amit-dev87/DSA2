class Solution {
  public:
    vector<int> twoRepeated(vector<int>& arr) {
        unordered_map<int,int>freq;
        vector<int>ans;
        for(int i : arr){
            freq[i]++;
            if(freq[i] == 2){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
