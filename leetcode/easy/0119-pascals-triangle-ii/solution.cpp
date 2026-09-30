class Solution {
public:
    vector<int> getRow(int rowIndex) {
        long long ans=1;
        vector<int>res;
        res.push_back(1);
        for(int col=0;col<rowIndex;col++){
            ans*=rowIndex-col;
            ans/=col+1;
            res.push_back(ans);
        }
        return res;
    }
};