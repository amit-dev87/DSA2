class Solution {
public:
    int minAddToMakeValid(string s) {
        int count=0,ans=0;
        for(char i:s){
            if(i=='('){
                count++;
            }else if(count>0){
                count--;
            }
            else{
                ans++;
            }
        }
        return count+ans;
    }
};