class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        stack<int> a;

        for(int i = 0; i < arr.size(); i++) {
            if(!a.empty() && 
               ((a.top() < 0 && arr[i] >= 0) || 
                (a.top() >= 0 && arr[i] < 0))) {
                a.pop();
            } else {
                a.push(arr[i]);
            }
        }

        vector<int> ans;

        while(!a.empty()) {
            ans.push_back(a.top());
            a.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};