class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int k=prices[0];
        int maxprofit=0;
        for(int i=1;i<prices.size();i++){
            k=min(k,prices[i]);
            maxprofit=max(maxprofit,prices[i]-k);
        }
        return maxprofit;
    }
};
