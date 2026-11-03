class Solution {
  public:
    vector<int> search(string &pat, string &txt) {
        int n = pat.size() , m = txt.size();
        vector<int>ans;
        for(int i = 0 ; i <= m - n  ; i++){
            if(txt.substr(i,n) == pat){
                ans.push_back(i);
            }
        }
       return ans; 
    }
};