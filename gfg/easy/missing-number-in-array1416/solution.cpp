class Solution {
  public:
    int missingNum(vector<int>& arr) {
        int n = arr.size();
        sort(arr.begin(), arr.end());
        int i = 1;
        for(int j = 0 ; j < arr.size() ; j++){
            if(arr[j] != i){
                return i;
            }
            i++;
        }
        return n + 1;
    }
};