class Solution {
  public:
    bool isBalanced(string& s) {
        stack<char>st;
        for(char i : s){
            if(i == '(' || i == '{' || i == '['){
                st.push(i);
            }else{
                if(!st.empty() && st.top()== '(' && i == ')'){
                    st.pop();
                }else if(!st.empty() && st.top()== '{' && i == '}'){
                    st.pop();
                }else if(!st.empty() && st.top()== '[' && i == ']'){
                    st.pop();
                }else{
                    st.push(i);
                }
            }
        }
        return st.empty();
    }
};