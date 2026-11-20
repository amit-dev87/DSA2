class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        int a = 1 , i = 0;
        while(k > 0){
            if(i < arr.size() && arr[i] == a){
                i++;
            }else{
                k--;
                if(k == 0){
                    return a;
                }
            } 
            a++;
            
        }
        return a;
        
    }
};