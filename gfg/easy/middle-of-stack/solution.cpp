class Solution {
  public:
    int stackMiddle(stack<int>& st){
        int n = st.size();
        for(int  i = 0 ; i < n/2 ; i++){
            st.pop();
        }
        return st.top();
    }
};