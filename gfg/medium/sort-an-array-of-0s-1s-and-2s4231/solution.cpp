class Solution {
  public:
    void sort012(vector<int>& arr) {
        int l=0,r=arr.size()-1,p=0;
        while(p<=r){
            if(arr[p]==2){
                swap(arr[p],arr[r]);
                r--;
            }else if(arr[p]==0){
                swap(arr[p],arr[l]);
                p++;
                l++;
            }else{
                p++;
            }
        }
    }
};