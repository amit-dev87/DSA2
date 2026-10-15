class Solution {
  public:
    char nonRepeatingChar(string &s) {
        unordered_map<char,int>m;
        string ans;
        for(char i : s){
            m[i]++;
        }
        for(char i : s){
            if(m[i]==1){
                return i;
            }
        }
        return '$';
    }
};