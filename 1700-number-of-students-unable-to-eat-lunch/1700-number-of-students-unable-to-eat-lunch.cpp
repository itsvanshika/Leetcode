class Solution {
public:
    int countStudents(vector<int>& students, vector<int>& sandwiches) {
        int n = sandwiches.size();
        int arr[2]={0};
        for(int i=0;i<n;i++){
            arr[students[i]]++;
        }
        for(int i=0;i<n;i++){
            if(arr[sandwiches[i]]==0){
                return n-i;
            }
            arr[sandwiches[i]]--;
        }
        return 0;
    }
};