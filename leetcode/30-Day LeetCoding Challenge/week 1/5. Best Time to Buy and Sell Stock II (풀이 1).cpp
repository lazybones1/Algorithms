// 사고 팔기를 하루에 동시에 못한다고 가정한 경우
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;
        if(prices.size()>1) {
            int sell = prices[0];
            int buy = prices[0];
            bool isacd = false;
            for(int i = 0; i<prices.size()-1; i++){
                if(prices[i] >= prices[i+1]){
                    if(isacd){
                        profit += sell - buy;
                    }
                    buy = prices[i+1];
                    sell = prices[i+1];
                    isacd = false;
                }
                else if(prices[i]<prices[i+1]){
                    if(isacd){
                        sell = prices[i+1];
                        if(i==prices.size()-2){
                            profit += sell - buy;
                        }
                    }else{
                        sell = prices[i+1];
                        if(i==prices.size()-2){
                            profit += sell - buy;
                        }
                        isacd = true;
                    }
                }
            }
        }
        return profit;
    }
};
