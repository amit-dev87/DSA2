class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        int count = 0 , cand = 0; 
        for(int i : arr){
            if(count == 0){
                cand = i;
            }
            if(cand == i){
                count++;
            }else{
                count--;
            }
        }
        count = 0;
        for(int i : arr){
            if(cand == i){
                count++;
            }
        }
        return count>arr.size()/2 ? cand : -1 ;
    }
};