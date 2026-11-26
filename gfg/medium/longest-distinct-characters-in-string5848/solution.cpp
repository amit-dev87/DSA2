class Solution {
  public:
    int longestUniqueSubstr(string &s) {
        set<int>st;
        int i = 0 , j = 0 , count = 0;
        while(i < s.size()){
            while(st.find(s[i] )!= st.end()){
                st.erase(s[j]);
                j++;
            }
            st.insert(s[i]);
            count = max(count , i - j + 1);
            i++;
        }
        return count;
    }
};
