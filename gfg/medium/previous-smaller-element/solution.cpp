class Solution {
  public:
    vector<int> prevSmaller(vector<int>& arr) {
        stack<int>s;
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            while(s.size()>0 && s.top()>=arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans.push_back(-1);
            }else{
                ans.push_back(s.top());
                
            }
            s.push(arr[i]);
        }
        return ans;
    }
};