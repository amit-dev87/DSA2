class Solution {
  public:
    void deleteMid(stack<int>& st) {
        stack<int>ans;
        int n = st.size();
        for(int i = 0 ; i < n/2 ; i++){
            ans.push(st.top());
            st.pop();
        }
        st.pop();
        while(!ans.empty()){
            st.push(ans.top());
            ans.pop();
        }
    }
};