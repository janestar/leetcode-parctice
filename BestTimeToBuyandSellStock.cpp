class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()<2)return 0;
        int cur_min=prices[0];
        int profit=0;
        int size=prices.size();
        for(int i=0;i<size;i++){
            profit=max(profit,prices[i]-cur_min);
            cur_min=prices[i]<cur_min?prices[i]:cur_min;
            
        }
        return profit;
    }
};