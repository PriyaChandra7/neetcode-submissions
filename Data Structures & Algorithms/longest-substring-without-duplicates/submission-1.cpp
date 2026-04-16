class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxCount=0;
        for(int j=0;j<s.length();j++){
            for(int k=i;k<j;k++){
                if(s[k]==s[j]){
                    i=k+1;
                    break;
                }
            }
            maxCount= max(maxCount, j-i+1);
        }
        return maxCount;
    }
};
