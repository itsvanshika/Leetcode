class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxs=0;
        for(char&ch:s){
            if(ch=='('){
                st.push(ch);
            }
            else if(ch==')'){
                st.pop();
            }
            else{
                continue;
            }
            maxs=max(maxs,(int)(st.size()));
        }
        return maxs;
        
    }
};