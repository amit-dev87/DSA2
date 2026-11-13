class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n, 0));
        int a  = 1;
        int   left = 0 , right  = n - 1 , top = 0 , bottom = n - 1;
        while(top <= bottom && left <= right){
            // left to right filling element
            for(int i = left ; i <= right ; i++){
                ans[top][i] = a++;
            }
            top++;
            //top to bottom filling element
            for(int i = top ; i <= bottom ; i++){
                ans[i][right] = a++;
            }
            right--;
            // right to left filling element
            if(top <= bottom){
                for(int i = right ; i >= left ; i--){
                    ans[bottom][i] = a++;
                }
                bottom--;
            }
            // left to right filling element
            if(left <= right){
                for(int i = bottom ; i >= top ;i--){
                    ans[i][left] = a++;
                }
                left++;
            }                         
        }
    return ans;
    }
};