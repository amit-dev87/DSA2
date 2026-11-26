class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int sum1 = 0 , sum2 =  0 , n = cardPoints.size();
        for(int i = 0 ; i < k ; i++){
            sum1 += cardPoints[i];
        }
        int m = sum1;
        for(int i = 0 ; i < k ; i++){
            sum2 += cardPoints[n - 1 - i];
            sum1 -= cardPoints[k - 1 - i];
            m = max(m , sum1 + sum2);
        }
        return m;
    }
};