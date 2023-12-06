class Solution {
public:
    int totalMoney(int n) {
        int k = n/7;
        int a=1,ans=0;
        for(int i=0;i<k;i++){
            
            for(int j=1;j<=7;j++)
            {
                ans = ans+a;
                a++;
            }
            a =2+i;
        }
        k = n - (k*7);
       
        for(int i=0;i<k;i++){
            ans = ans+a;
            a++;
        }
        return ans;
        
    }
};