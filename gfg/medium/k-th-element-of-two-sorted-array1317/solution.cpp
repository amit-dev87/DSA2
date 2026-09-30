class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        int n=a.size(),m=b.size();
        vector<int>ans(n+m,0);
        for(int i=0;i<n;i++){
            ans[i]=a[i];
        }
        for(int i=0;i<m;i++){
            ans[n+i]=b[i];
        }
        sort(ans.begin(),ans.end());
        for(int i=0;i<ans.size();i++){
            if(k==1){
                return ans[i];
            }
            k--;
        }
    return{}; 
    }
};