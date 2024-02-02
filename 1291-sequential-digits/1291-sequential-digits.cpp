class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        queue<int>q;
        int n;
        vector<int>result;
        for(int i=1;i<=8;i++){
            q.push(i);
        }
        while(!q.empty()){
            n = q.front();
            q.pop();
            if(n>=low && n<=high){
               result.push_back(n); 
            }
            int ld = n%10;
            if(ld<9){
                q.push((n*10)+(ld+1));
            }
            
        }
        return result;
    }
};