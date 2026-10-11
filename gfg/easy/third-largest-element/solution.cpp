class Solution {
  public:
    int thirdLargest(vector<int> &arr) {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        if(n>=3){
            return arr[n-3];
        }else{
            return -1;
        }
        
    }
};