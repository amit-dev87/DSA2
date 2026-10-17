class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n = a.size();
        vector<int>ans;
        int i = 0 , j = 0;
        while(i != n && j != n){
            if(a[i]<b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while( i < n){
            ans.push_back(a[i]);
            i++;
        }
        while(j < n){
            ans.push_back(b[j]);
            j++;
        }
        int m = ans.size();
        if (m % 2 == 0){
            return (ans[m/2] + ans[(m-1)/2])/2.0;
        }else{
            return ans[m/2];
        }
    }
};