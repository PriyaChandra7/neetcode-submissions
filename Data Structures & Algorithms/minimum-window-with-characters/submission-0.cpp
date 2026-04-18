class Solution {
public:
    string minWindow(string s, string t) {
        vector<int> req(128,0), freq(128,0);
        int left =0;
        int required=0;
        for(char c:t){
            if(req[c]==0){
                required++;
            }
            req[c]++; 
        }
        
        int formed=0;
        int start=0;
        int minLen = INT_MAX;
        for(int right=0;right<s.length();right++){
            char r=s[right];
            freq[r]++;
            if(freq[r]==req[r]){
                formed++;
            }
            while(formed==required){
                if(right-left+1<minLen){
                    minLen=right-left+1;
                    start=left;
                }
                char l= s[left];
                freq[l]--;

                if(freq[l]<req[l]){
                    formed--;
                }
                left++;

            }

        }
        if(minLen==INT_MAX) return "";
        return s.substr(start, minLen);
    }
};
