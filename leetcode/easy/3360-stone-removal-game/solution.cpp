class Solution {
public:
    bool canAliceWin(int n) {
        int m = 10;
        bool alice = true;
        while(n >= m){
            n -= m;
            m--;
            alice = !alice;
        }
        return !alice;
    }
};