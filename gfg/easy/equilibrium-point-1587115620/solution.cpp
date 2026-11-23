class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int totalSum = 0;
        for(int i : arr){
            totalSum += i;
        }
        int leftSum = 0;
        for(int i = 0 ; i < arr.size() ; i++){
            int rightSum = totalSum - leftSum - arr[i];
            if(rightSum == leftSum) return i;
            leftSum += arr[i];
        }
        return -1;
    }
};