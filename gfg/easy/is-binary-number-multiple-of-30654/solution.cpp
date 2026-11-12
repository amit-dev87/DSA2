class Solution {
  public:
    bool isMultipleOf3(string& s) {
        int ans = 0;
        for(int i = 0 ; i  < s.size() ; i++){
            ans =( ans * 2 + (s[i] - '0'))%3;
        }

       return ans == 0; 
    }
};