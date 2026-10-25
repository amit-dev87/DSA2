class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
        unordered_map<int,int> freq;

        for(int i : arr) {
            freq[i]++;
        }

        for(int i : arr) {
            if(freq[i] == 1) {
                return i;
            }
        }

        return 0;
    }
};
