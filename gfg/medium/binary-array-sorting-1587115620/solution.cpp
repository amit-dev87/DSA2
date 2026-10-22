class Solution {
  public:
    void binSort(vector<int> &arr) {
        int i = 0 ;
        int j = arr.size() - 1;
        while(j>=i){
            if(arr[i] == 1){
                swap(arr[i],arr[j]);
                j--;
            }else if(arr[j] == 0){
                swap(arr[j],arr[i]);
                i++;
            }else{
                i++;
                j--;
            }
        }
    }
};
