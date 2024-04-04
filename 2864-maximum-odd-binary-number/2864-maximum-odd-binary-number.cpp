#include<string.h>
class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int c1=0;
        for(char&ch:s){
            if(ch=='1'){
                c1++;
            }
        }
        string ans;
       int c0=s.length()-c1;
      ans.append(c1-1,'1');
        ans.append(c0,'0');
        ans.append(1,'1');
        return ans;
    }
};