class Solution {
  public:
    vector<int> kLargest(vector<int>& arr, int k) {
        sort(arr.begin(),arr.end());
        vector<int>ans;
        if(arr.size() == 1 && k == 1){
            ans.push_back(arr[0]);
            return ans;
        }
        for(int i = arr.size()-1 ; i > arr.size() - k -1 ; i--){
            ans.push_back(arr[i]);
        }
        return ans;
    }
};