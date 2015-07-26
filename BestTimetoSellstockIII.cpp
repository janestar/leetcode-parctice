#include<algorithm>
#include<vector>
using namespace std;
		
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit=0;
        for(int i=0;i<prices.size();i++){
            vector<int> sub1(prices.begin(),prices.begin()+i);
            vector<int> sub2(prices.begin()+i,prices.end()-1);
            int submax1=maxSubProfix(sub1);
            int submax2=maxSubProfix(sub2);
            max_profit=max(max_profit,submax1+submax2);
        }
        return max_profit;
    }
    
    int maxSubProfix(vector<int>& prices){
        if(prices.size()<2)return 0;
        int cur_min=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++){
            profit=max(profit,prices[i]-cur_min);
            cur_min=min(cur_min,prices[i]);
        }
        return profit;
    }
};
