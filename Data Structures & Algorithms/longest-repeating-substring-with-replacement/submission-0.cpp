class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> v(26,0);
        int left =0;
        int maxFreq=0;
        int maxLen=0;
        
        for(int right=0;right<s.size();right++){
            v[s[right] - 'A']++;

            maxFreq = max(maxFreq, v[s[right]-'A']);

            if((right-left+1) - maxFreq>k){
                v[s[left] - 'A']--;
                left++;
            }

            maxLen = max(maxLen, right-left+1);
        }
        return maxLen;
    }
};
