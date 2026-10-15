class Solution {
  public:
    bool areRotations(string &s1, string &s2) {
        int n = s1.size();
        if(s1.size() != s2.size()) return false;
        string temp = s1 + s1;
        return temp.find(s2) != string::npos;
    }
};