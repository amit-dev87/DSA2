class Solution {
  public:
    int getFirstSetBit(int n) {
        int a = 1;
        while(n > 0){
            if(n&1){
                return a;
            }
            a++;
            n = n>>1;
        }
        return 0;
    }
};