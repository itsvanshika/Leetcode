#include <iostream>
#include <cctype>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        // Remove all non-alphanumeric characters and convert to lowercase
        string cleaned;
        for (char c : s) {
            if (isalnum(c)) {
                cleaned.push_back(tolower(c));
            }
        }

        // Check if the cleaned string is a palindrome
        int i = 0, j = cleaned.length() - 1;
        while (i <= j) {
            if (cleaned[i] != cleaned[j]) {
                return false;
            }
            i++;
            j--;
        }

        return true;
    }
};
