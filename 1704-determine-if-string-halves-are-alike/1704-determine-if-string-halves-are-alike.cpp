class Solution {
public:
    bool halvesAreAlike(string s) {
        /*auto countVowels = [](const string& str) {
            unordered_set<char> vowels{'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
            int count = 0;
            for (char c : str) {
                if (vowels.count(c) > 0) {
                    count++;
                }
            }
            return count;
        };

        int length = s.length();
        int midPoint = length / 2;

        string firstHalf = s.substr(0, midPoint);
        string secondHalf = s.substr(midPoint);

        return countVowels(firstHalf) == countVowels(secondHalf);*/
        unordered_set<char> vowels{'a','e','i','o','u','A','E','I','O','U'};
        int count_f =0;
        int count_s = 0;
        int n = s.length();
        for(int i=0;i<n/2;i++){
            if(vowels.find(s[i])!=vowels.end()){
                count_f++;
            }
        }
         for(int i=n/2;i<n;i++){
            if(vowels.find(s[i])!=vowels.end()){
                count_s++;
            }
        }
        return count_f == count_s;
    }
};
