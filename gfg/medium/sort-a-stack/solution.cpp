class Solution {
  public:
    void sortStack(stack<int> &st) {
        vector<int>a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        sort(a.begin(),a.end());
        for(int i : a){
            st.push(i);
        }
        
    }
};
