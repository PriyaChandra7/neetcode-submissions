class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int i=0;
        int maxCount=0;
        unordered_set<char> st;
        for(int j=0;j<s.length();j++){
            while(st.count(s[j])){
                st.erase(s[i]);
                i++;
            }
            st.insert(s[j]);

            maxCount= max(maxCount, j-i+1);
        }
        return maxCount;
    }
};
