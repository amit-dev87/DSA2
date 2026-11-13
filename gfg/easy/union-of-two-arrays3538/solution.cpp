class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        set<int>st;
        vector<int>ans;
        for(auto i : a){
            st.insert(i);
        }
        for(auto i : b){
            st.insert(i);
        }
        for(auto i : st){
            ans.push_back(i);
        }
        return ans;
    }
};