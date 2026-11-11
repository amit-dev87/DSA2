class Solution {
  public:
    string multiplyStrings(string &s1, string &s2) {
        bool neg = false;

        if(s1[0] == '-') {
            neg = !neg;
            s1 = s1.substr(1);
        }

        if(s2[0] == '-') {
            neg = !neg;
            s2 = s2.substr(1);
        }

        int p = s1.find_first_not_of('0');
        s1 = (p == string::npos) ? "0" : s1.substr(p);

        p = s2.find_first_not_of('0');
        s2 = (p == string::npos) ? "0" : s2.substr(p);
        
        if(s1 == "0" || s2 == "0"){
            return "0";
        }
        
        int n = s1.size();
        int m = s2.size();
        
        vector<int>ans(n+m,0);
        
        for(int i = n-1; i >= 0 ; i--){
            for(int j = m - 1; j >=0 ; j--){
                int mul = (s1[i] - '0')*(s2[j] - '0');
                
                int sum = mul + ans[i+j+1];
                
                ans[i+j+1] = sum%10;
                
                ans[i+j] += sum/10;
            }
        }
        string result = "";
        for(auto x : ans){
            if(!(result.empty() && x == 0)){
                result += to_string(x);
            }
        }
        if(neg) result = "-" + result;
       return result; 
    }
};