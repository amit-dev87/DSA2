class Solution {
  public:
    void reverseStack(stack<int> &st) {
        stack<int>st2;
        while(!st.empty()){
            st2.push(st.top());
            st.pop();
        }
        st=st2;
        
    }
};