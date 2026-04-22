class Solution {
public:
    bool isValid(string s) {
        stack<int> store;
        for(int i=0;i<s.length();i++){
            if(s[i]== '['|| s[i]=='{' || s[i]=='('){
                store.push(s[i]);
            } else{
                if(store.empty()) return false;
                char top = store.top();
                store.pop();

                if((s[i]==')' && top!='(')||
                (s[i]=='}' &&top!='{' ) ||
                (s[i]==']'&& top!='[' )){
                    return false;
                }
            }
        }
        return store.empty();
    }
};
