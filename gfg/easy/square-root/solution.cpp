class Solution {
  public:
    int floorSqrt(int n) {
    int i = 1 , j = n;
    int ans = 0;
    while(i <= j){
        int mid = i + ((j-i)/2);
        if((long long)mid * mid > n){
            j = mid -1;
        }else{
            ans = mid;
            i = mid + 1;
        }
        }
        return ans;
        
    }
};