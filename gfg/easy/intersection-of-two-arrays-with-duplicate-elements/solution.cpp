class Solution {
public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        set<int> st;
        vector<int> ans;

        for(int i : a) {
            st.insert(i);
        }

        for(int i : b) {
            if(st.find(i) != st.end()) {
                ans.push_back(i);
                st.erase(i);
            }
        }

        return ans;
    }
};