class Solution {
public:
    int minimumDeletions(string s) {
        int n = s.length();
        vector<int>left_b(n,0);
        vector<int>right_a(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            left_b[i] = count;
            if(s[i]=='b'){
                count++;
            }
        }
        count=0;
        for(int i=n-1;i>=0;i--){
            right_a[i] = count;
            if(s[i]=='a'){
                count++;
            }
        }
        count=INT_MAX;
        for(int i=0;i<n;i++){
            count = min(count,left_b[i]+right_a[i]);
        }
        return count;
    }
};