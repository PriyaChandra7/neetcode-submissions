class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
       unordered_map<int, int> mpp;

       for(int i:nums){
            mpp[i]++;
       }

       vector<vector<int>> bucket(nums.size()+1);
       for(auto &it:mpp){
            bucket[it.second].push_back(it.first);
       }
       vector<int> result;
       for(int i=bucket.size()-1;i>0;i--){
            for(auto &num:bucket[i]){
                result.push_back(num);
                if(result.size()==k){
                    return result;
                }
            }
       }
       return {};
    }
};
