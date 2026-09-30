class Solution {
public:
    vector<int>generateRow(int row){
        int a=1;
        vector<int>ans;
        ans.push_back(1);
        for(int col=1;col<row;col++){
            a*=(row-col);
            a/=col;
            ans.push_back(a);
        }
        return ans;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(generateRow(i));
        }
        return ans;
    }
};