class Solution {
  public:
    void rearrange(vector<int> &arr) {
        vector<int> pos, neg, ans;
        
        for(int x : arr) {
            if(x >= 0)
                pos.push_back(x);
            else
                neg.push_back(x);
        }
        
        int i = 0, j = 0;
        
        while(i < pos.size() && j < neg.size()) {
            ans.push_back(pos[i++]);
            ans.push_back(neg[j++]);
        }
        
        while(i < pos.size()) {
            ans.push_back(pos[i++]);
        }
        
        while(j < neg.size()) {
            ans.push_back(neg[j++]);
        }
        
        arr = ans;
    }
};