class Solution {
public:
    bool hasduplicate(string &s1,string &s2){
        int a[26]={0};
        for(char &ch:s1){
            if(a[ch-'a']>0){
                return true;
            }
            a[ch-'a']++;
        }
        for(char &ch:s2){
            if(a[ch-'a']>0){
                return true;
            }
        }
        return false;
    }
    int solve(int i,vector<string>&arr,string temp,int n){
        if(i>=n){
            return temp.length();
            
        }
        int include=0;
        int exclude=0;
        if(hasduplicate(arr[i],temp)){
            exclude=solve(i+1,arr,temp,n);
        }
        else{
            exclude = solve(i+1,arr,temp,n);
            include = solve(i+1,arr,temp+arr[i],n);
        }
        return max(include,exclude);
    }
    int maxLength(vector<string>& arr) {
       string temp = "";
        int n = arr.size();
        int i=0;
        return solve(i,arr,temp,n);
    }
};