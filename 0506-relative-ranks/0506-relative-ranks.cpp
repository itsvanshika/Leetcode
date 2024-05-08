#include <vector>
#include <string>
#include <algorithm>

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<pair<int,int>> p;
        int n = score.size();
        for(int i=0; i<n; i++){
            p.push_back(make_pair(i, score[i]));
        }
        sort(p.begin(), p.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
            return a.second > b.second;
        });
        vector<string> result(n);
        for(int i=0; i<n; i++){
            int index = p[i].first;
            if(i==0){
                result[index]="Gold Medal";
            }
            else if(i==1){
                result[index]="Silver Medal";
            }
            else if(i==2){
                result[index]="Bronze Medal";
            }
            else{
                result[index]=to_string(i+1);
            }
        }
        return result;
    }
};
