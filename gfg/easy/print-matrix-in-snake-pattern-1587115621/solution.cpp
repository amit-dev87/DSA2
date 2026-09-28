class Solution {
  public:
    vector<int> snakePattern(vector<vector<int> > arr) {
        int n=arr.size(),m=arr[0].size();
        int top=0,bottom=n-1;
        int left=0,right=m-1;
        vector<int>ans;
        while(top<=bottom){
            for(int i=left;i<=right;i++){
                ans.push_back(arr[top][i]);
            }
                top++;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    ans.push_back(arr[top][i]);
                }
            top++;
            }
        }
        return ans;
    }
};