class Solution {
  public:
    bool subArrayExists(vector<int>& arr) {
        int sum = 0;
        unordered_set<int>s;
        s.insert(0);
        for(int i : arr){
            sum += i;
            if(s.find(sum) != s.end()) return true;
            s.insert(sum);
        }
        return false;
    }
};