class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>ans;
        unordered_map<int,int>freq;
        for(int i : arr){
            freq[i]++;
            if(freq[i]==2){
                ans.push_back(i);
            }
        }
       return ans; 
    }
};