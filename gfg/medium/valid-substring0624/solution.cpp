class Solution {
  public:
    int maxLength(string& s) {
        int  left = 0 , right  = 0 , m = 0;
        for(int i =0 ; i < s.size() ; i ++){
            if(s[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(left == right){
                m = max(m, 2 * right);
            }else if (right  > left){
                right = left = 0;
            }
        }
        
        right = left = 0;
        for(int i =s.size() - 1 ; i >= 0  ; i--){
            if(s[i] == '('){
                left++;
            }else{
                right++;
            }
            
            if(left == right){
                m = max(m, 2 * left);
            }else if (left  > right){
                right = left = 0;
            }
        }
        return m;
    }
        
};