class Solution {
  public:
    long long sumOfDivisors(long long n) {
        long long sum = 0;
        for(int i = 1 ; i <= n ; i++){
            for(int j = 1 ; j <=i ; j++){
                if(i % j == 0){
                    sum += j;
                }
            }
        }
        return sum;
    }
};