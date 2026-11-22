class Solution {
public:
    bool checkString(string s) {
        bool gotB = false;
        for(int i = 0; i < s.size() ; i++){
            if(s[i] == 'b'){
                gotB = true;
            }
            if(s[i] == 'a' && gotB){
                return false;
            }
        }
        return true;
    }
};