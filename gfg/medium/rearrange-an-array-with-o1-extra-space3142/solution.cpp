class Solution {
  public:
    void arrange(vector<int>& arr) {
        int n = arr.size();
        vector<int>temp(n,0);
        for(int i = 0 ; i < n ; i++){
            temp[i] = arr[arr[i]];
        }
        arr = temp; 
        
    }
};