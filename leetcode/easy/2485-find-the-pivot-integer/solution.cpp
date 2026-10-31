class Solution {
public:
    int pivotInteger(int n) {
        int total = 0;
        for(int i = 1 ; i <= n ; i++){
            total += i;
        }
        int leftSum = 0;
        for(int i = 1 ; i <= n ; i++){
            int rightSum = total - leftSum - i;
            if(leftSum == rightSum){
                return i;
                break;
            }
            leftSum += i;
        }
        return -1;
    }
};