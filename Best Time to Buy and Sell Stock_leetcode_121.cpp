class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        int len=prices.size();
        int maxi=prices[len-1];
        for(int i=len-2;i>-1;i--){
            if(maxi>prices[i]){
              max_profit=max(max_profit,maxi-prices[i]);
            }
            else{
                maxi=prices[i];
            }
        }
        return max_profit;
        
    }
};
