class Solution {
  public:
    int getSecondLargest(vector<int> &arr) {
        int max1=-1;
        int max2=-1;
        for(int i:arr){
            if(i>max1){
                max2=max1;
                max1=i;
            }
            else if(i!=max1 && i>max2){
                max2=i;
            }
        }
        return max2;
    }
};