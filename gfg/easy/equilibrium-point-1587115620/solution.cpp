class Solution {
  public:
    int findEquilibrium(vector<int> &arr) {
        int sum=0,left=0;
        for(int i:arr){
            sum+=i;
        }
        for(int i=0;i<arr.size();i++){
            
               sum-=arr[i];
               if(sum==left){
                   return i;
               }
               left+=arr[i];
        }
       return -1; 
    }
};