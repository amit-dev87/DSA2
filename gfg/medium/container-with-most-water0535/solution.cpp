class Solution {
  public:
    int maxWater(vector<int> &arr) {
        int n = arr.size();
        int i = 0 , j = n - 1;
        int m = 0;
        while(i < j){

            int l = j - i;
            int b = min(arr[i],arr[j]);
            int area = l * b;
            m = max(m , area);
            if (arr[i] < arr[j]) {
                i++;
            } else {
                j--;
            }
        }
        return m;
    }
};