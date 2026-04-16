class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n= nums.size();
        vector<int> product(n,1);
        int left=1;
        for(int i=0;i<nums.size();i++){
            product[i] =left;
            left = left * nums[i];
        }
        int right=1;
        for(int i=n-1;i>=0;i--){
            product[i] = product[i]*right;
            right = right * nums[i];
        }      
        return product;
    }
};
