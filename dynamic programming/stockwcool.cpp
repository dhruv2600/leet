class Solution {
public:
    int maxProfit(vector<int>& prices) {

        vector<int> buy;
        vector<int> sell;
        vector<int> cool;
        buy.resize(prices.size());
        sell.resize(prices.size());
        cool.resize(prices.size());
        buy[0]=-prices[0];
        sell[0]=0;
        cool[0]=INT_MIN;
    

        for(int i=1; i<prices.size(); i++) {

            buy[i]=max(buy[i-1],cool[i-1]-prices[i]);
            sell[i]=max(sell[i-1],buy[i-1]+prices[i]);
            cool[i]=sell[i];


        }

        return max(sell[prices.size()-1],cool[prices.size()-1]);



        
        
        
        
    }
};