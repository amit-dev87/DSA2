class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
    vector<int>ans;
    long long c = 0;
    for(int i : nums){
        c^=i;
    }
    int bit = c & (-c);
    int a = 0 , b = 0;
    for(int num : nums){
        if(num & bit){
            a^=num;
        }else{
            b^=num;
        }
    }
    return {a , b};
    }
};