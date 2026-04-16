class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<end){

            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[end])){
                end--;
                continue;
            }
            char left = tolower(s[start]);
            char right= tolower(s[end]);
            if(left!=right){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }
};
