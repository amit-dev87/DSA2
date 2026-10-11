class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int max = INT_MIN;
        for(int i : piles){
            if(i > max){
                max = i;
            }
        }
        int low = 1 ,  ans = 0;
        int high = max;
        while(low <= high ){
            int mid = low + (high - low) / 2 ; 
            long long  total = 0;
            for(int i : piles){
                total += ( i + mid - 1) / mid;
            }
            if(total <= h){
                ans = mid;
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        } 
            
    return ans;
    }
};