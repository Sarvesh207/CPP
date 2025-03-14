//  BruteForce
class Solution {
    public:
        int maxProfit(vector<int>& prices) {
            int n = prices.size();
            int maxPro = 0;
             for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (prices[j] > prices[i]) {
                maxPro = max(prices[j] - prices[i], maxPro);
                }
            }
            }
    
        return maxPro;
        }
    };


    //  Optimal


    class Solution {
        public:
            int maxProfit(vector<int>& prices) {
                int n = prices.size();
                int maxPro = 0;
                int mini = prices[0];
                for (int i = 0; i < n; i++) {
                    maxPro = max(maxPro, prices[i]-mini);
                    mini = min(mini, prices[i]);
                }
        
            return maxPro;
            }
        };