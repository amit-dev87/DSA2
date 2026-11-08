class Solution {
public:
    string frequencySort(string s) {
        unordered_map<int,int>mp;
        for(auto i : s){
            mp[i]++;
        }
        priority_queue<pair<int,char>> pq;
        for(auto x : mp){
            pq.push({x.second,x.first});
        }
        string ans = "";
         while(!pq.empty()){
            auto x = pq.top();
            pq.pop();
            ans += string(x.first,x.second);
         }
         return ans;
        
    }
};