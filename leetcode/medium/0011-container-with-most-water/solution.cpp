class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int i = 0 , j = n - 1;
        int m = 0 ;
        while(i < j){
            int l = j - i;
            int b = min(height[i],height[j]);
            int area = l * b;
            m = max(m , area);
            if(height[i] < height[j]){
                i++;
            }else{
                j--;
            }
        }
        return m;
    }
};