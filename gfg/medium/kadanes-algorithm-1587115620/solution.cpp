class Solution {
  public:
    int maxSubarraySum(vector<int> &arr) {
        int sum=0;
        int m=INT_MIN;
        for(int i:arr){
            sum+=i;
            m=max(m,sum);
            if(sum<0){
                sum=0;
            }
        }
       return m; 
    }
};