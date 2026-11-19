class Solution {
  public:
    int removeConsecutiveSame(vector<string>& arr) {
        stack<string>st;
        for(int i = 0 ; i < arr.size() ; i++){
            if(!st.empty() && st.top() == arr[i]){
                st.pop();
            }else{
            st.push(arr[i]);
            }
        }
        return st.size();
        
    }
};