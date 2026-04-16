class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int longest =0;
        unordered_set<int> store(nums.begin(), nums.end());

        for(auto num: store){
            if(store.find(num-1)== store.end()){
                int value=num;
                int count =1;

                while(store.find(value+1)!= store.end()){
                    value++;
                    count++;
                }
                
                longest = max(longest, count);
           } 
        }
        return longest;
    }
};
