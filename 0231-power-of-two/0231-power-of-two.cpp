class Solution {
public:
    bool isPowerOfTwo(int n) {
        int a=0;
        int c;
        while(a!=31){
            c = pow(2,a);
            if(c==n){
                return 1;
            }
            a=a+1;
        }
        return 0 ;
    }
};