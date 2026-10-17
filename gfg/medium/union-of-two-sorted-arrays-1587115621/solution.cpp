class Solution {
  public:
    vector<int> findUnion(vector<int> &a, vector<int> &b) {
        set<int>s;
        for(int  i : a){
            s.insert(i);
        }
        for(int  i : b){
            s.insert(i);
        }
        vector<int>temp;
        for(auto  i : s){
            temp.push_back(i);
        }
        return temp;
    }
};