class Solution {
public:
    int countOrders(int n) {
        int m = 1e9+7;
        if(n==1){
            return 1;
        }
        long long int result = 1;
        for(int i=2;i<=n;i++){
            int spaces = (i-1)*2+1;
            int possibility = spaces * (spaces+1)/2;
            result = result * possibility;
            result = result%m;
        }
        return result;
    }
};