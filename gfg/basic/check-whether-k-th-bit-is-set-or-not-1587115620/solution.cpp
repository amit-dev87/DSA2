class Solution {
  public:
    bool checkKthBit(int n, int k) {
        vector<int>ans;
        while(n > 0){
            int m = n%2;
            ans.push_back(m);
            n/=2;
        }
        if( k >= ans.size()){
            return false;
        }
        return ans[k] == 1;
    }
};