class Solution {
  public:
    int setBits(int n) {
        vector<int>ans;
        while(n > 0){
            ans.push_back(n % 2);
            n /= 2;
        }
        int count = 0;
        for(int i : ans){
            if(i == 1){
                count++;
            }
        }
        return count;
    }
};