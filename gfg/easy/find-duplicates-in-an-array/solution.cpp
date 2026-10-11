class Solution {
  public:
    vector<int> findDuplicates(vector<int>& arr) {
        vector<int>ans;
        set<int>st;
        unordered_map<int,int>freq;
        for(int i : arr){
            freq[i]++;
        }
        for(int i : arr){
            if(freq[i]==2 ){
                st.insert(i);
            }
        }
        for(int x : st){
            ans.push_back(x);
        }
       return ans; 
    }
};