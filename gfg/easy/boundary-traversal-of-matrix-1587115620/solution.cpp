class Solution {
  public:
    vector<int> boundaryTraversal(vector<vector<int>>& mat) {
        vector<int>ans;
        int i=mat.size(),j=mat[0].size();
        int left=0,right=j-1;
        int top=0,bottom=i-1;
        for(int n = 0 ; n <= right ; n++){
            ans.push_back(mat[top][n]);
        }
        top++;
        for(int n = top; n <= bottom ; n++){
            ans.push_back(mat[n][right]);
        }
        right--;
        if(top<=bottom){
            for(int n = right ; n >= left ; n--){
            ans.push_back(mat[bottom][n]);
        }
        bottom--;
        if(left<=right){
            for(int n = bottom ; n >= top ; n--){
            ans.push_back(mat[n][left]);
        }
        left++;
        }
        }
        return ans;
    }
};

        


