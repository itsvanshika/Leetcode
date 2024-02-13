class Solution {
public:
    bool check(int n, vector<string>& words,int m){
        string temp = words[m];
        int i=0;
        int j=n-1;
        while(i<=j){
            if(temp[i]!=temp[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        int n = words.size();
        for(int i=0;i<n;i++){
            int a = words[i].length();
            if(check(a,words,i))
            {
                return words[i];
            }
        }
        return "";
    }
};