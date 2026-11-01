class Solution {
  public:
    int findMin(vector<int>& arr) {
        int m = INT_MAX;
        for(int i : arr){
            m = min(m , i);
        }
       return m; 
    }
};