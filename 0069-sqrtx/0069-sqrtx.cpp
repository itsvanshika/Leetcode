class Solution {
public:

int mySqrt(int n) {
    int s=0;
    int e=n;
    long int mid=s+(e-s)/2;
    long int ans=-1;
    while(s<=e){
        long int sq=mid*mid;
        if(sq==n){
            return mid;
        }
        else if(sq>n){
            e=mid-1;
        }
        else{
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    
    }
    return ans;    }

};