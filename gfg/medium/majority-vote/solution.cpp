class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        unordered_map<int,int>m;
        vector<int>ans;
        int n=arr.size();
        for(int i=0;i<n;i++){
            m[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(m[arr[i]]>n/3){
                ans.push_back(arr[i]);
                m[arr[i]]=0;
            }
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};