class Solution {
  public:
    void segregateElements(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp;
        for(int i : arr){
            if(i >= 0){
                temp.push_back(i);
            }
        }
        for(int i : arr){
            if(i < 0){
                temp.push_back(i);
            }
        }
        arr=temp;
    }
};