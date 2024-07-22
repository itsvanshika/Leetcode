class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>>vec;
        int n=names.size();
        for(int i=0;i<n;i++){
            vec.push_back({heights[i],names[i]});
        }
        sort(vec.rbegin(),vec.rend());
        int i=0;
        for(auto&v:vec){
            names[i]=v.second;
            i++;
        }
        return names;
    }
};