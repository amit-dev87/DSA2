class Solution {
public:
    double pow(double x,long long n){
        if(n==0){
            return 1;
        }
        if(n<0){
            return 1/pow(x,-n);
        }
        double smallAns=pow(x,n/2);
        if(n%2==0){
            return smallAns*smallAns;
        }else{
            return smallAns*smallAns*x;
        }
    }
    double myPow(double x, int n) {
        return pow(x,n);
    }
};