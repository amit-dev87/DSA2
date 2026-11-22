class Solution {
  public:
    double medianOf2(vector<int>& a, vector<int>& b) {
        int n = a.size() , m = b.size();
        int i = 0 , j = 0;
        vector<int>ans;
        while(i < n  && j < m){
            if(a[i] <= b[j]){
                ans.push_back(a[i]);
                i++;
            }else{
                ans.push_back(b[j]);
                j++;
            }
        }
        while(i < n){
            ans.push_back(a[i]);
            i++;
        }
        while(j < m){
            ans.push_back(b[j]);
            j++;
        }
        if((n + m) % 2 != 0){
            return ans[(n+m)/2];
        }else{
            return (ans[((n+m)/2) - 1] + ans[((n+m)/2)]) / 2.0;
        }
    }
};