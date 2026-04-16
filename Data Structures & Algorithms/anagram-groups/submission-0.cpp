class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mpp;
       
        for(string s:strs){
             vector<int>store(26,0);
             for(char c:s){
                store[c-'a']++;
             }
             string key="";
             for(int i:store){
                key+=to_string(i);
                key+='#';
             }
             mpp[key].push_back(s);
        }
        vector<vector<string>>res;
        for(auto &it:mpp){
            res.push_back(it.second);
        }
        return res;
    }
};
