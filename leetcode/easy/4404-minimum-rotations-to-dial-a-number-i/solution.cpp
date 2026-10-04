class Solution {
public:
    int minRotations(string s) {
        int ans=0;
        int curr=0;
        for(char i:s){
            int next=i-'0';
            int d= abs(curr-next);
            ans+=min(d,10-d);
            curr=next;
        }
        return ans;
    }
};