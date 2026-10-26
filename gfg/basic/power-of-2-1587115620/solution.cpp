class Solution {
  public:
    bool isPowerofTwo(int n) {
        if(n  == 1){
            return true;
        }
    if(n <= 0 || n % 2 != 0){
        return false;
    }        
        isPowerofTwo(n/2);
    }
};