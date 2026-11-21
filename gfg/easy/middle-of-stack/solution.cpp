class Solution {
  public:
    int stackMiddle(stack<int>& st) {
        vector<int>ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        return ans[ans.size()/2];
        
    }
};