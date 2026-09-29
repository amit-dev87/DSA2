class Solution {
  public:
    int maxProfit(vector<int> &prices) {
        int mini=INT_MAX;
        int maxi=0;
        for(int i:prices){
            if(i<mini){
                mini=i;
            }else if(i-mini>maxi){
                maxi=i-mini;
            }
        }
      return maxi;  
    }
};
