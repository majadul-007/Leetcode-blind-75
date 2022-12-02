class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxPro = 0;
        int minimum = prices[0];


        for(int k=0; k<prices.size();k++){


            minimum = min(minimum, prices[k]);

            maxPro = max(maxPro, prices[k] - minimum);
        }

        return maxPro;

        

            
        
    }
};