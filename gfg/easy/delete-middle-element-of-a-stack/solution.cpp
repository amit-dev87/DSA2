class Solution {
  public:
    void deleteMid(stack<int>& st) {
        vector<int>a;
        while(!st.empty()){
            a.push_back(st.top());
            st.pop();
        }
        int n = a.size();
        a.erase(a.begin()+n/2);
        reverse(a.begin(),a.end());
        for(int i : a){
            st.push(i);
        }
    }
};