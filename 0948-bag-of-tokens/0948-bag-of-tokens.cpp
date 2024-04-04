class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
       sort(tokens.begin(),tokens.end());
        int score=0;
        int n = tokens.size();
        int i=0;
        int j=n-1;
        int maxscore=0;
        while(i<=j){
            if(power>=tokens[i]){
                power=power-tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1){
                power=power+tokens[j];
                j--;
                score--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
    }
};