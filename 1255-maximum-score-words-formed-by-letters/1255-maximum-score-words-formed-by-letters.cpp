class Solution {
public:
    int n;
    int max_score;
    void solve(int i,vector<int>&score,vector<string>&words,int currscore,vector<int>freq){
        max_score=max(max_score,currscore);
        if(i>=n){
            return;
        }
        int j=0;
        vector<int>tempfreq = freq;
        int tempscore=0;
        while(j<words[i].length()){
            char ch = words[i][j];
            tempfreq[ch-'a']--;
            tempscore+=score[ch-'a'];
            if(tempfreq[ch-'a']<0){
                break;
            }
            j++;
        }
        if(j==words[i].length()){
            solve(i+1,score,words,currscore+tempscore,tempfreq);
        }
        solve(i+1,score,words,currscore,freq);
    }
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        max_score=0;
        n = words.size();
        vector<int>freq(26,0);
        for(char &ch:letters){
            freq[ch-'a']++;
        }
        solve(0,score,words,0,freq);
        return max_score;
    }
};