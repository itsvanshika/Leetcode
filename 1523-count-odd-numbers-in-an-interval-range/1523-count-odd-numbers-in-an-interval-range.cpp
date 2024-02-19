class Solution {
public:
    int countOdds(int low, int high) {
        int diff=high-low;
        int a=0;
        if(low%2==0 && high%2==0){
            a=diff/2;
        }
        else{
            a = (diff/2)+1;
        }
        return a;
    }
};