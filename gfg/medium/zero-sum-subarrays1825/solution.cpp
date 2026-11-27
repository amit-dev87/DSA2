class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        int count = 0 , sum = 0;
        
        map<int , int>st;
        st[0] = 1;
        for(int i = 0 ; i < arr.size() ; i++){
            sum += arr[i];
            if(st.find(sum) != st.end()){
                count += st[sum];
            }
            
            st[sum]++;
        }
        return count;
    }
};