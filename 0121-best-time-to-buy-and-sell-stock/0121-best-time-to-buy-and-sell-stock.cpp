class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxpro=0;

        for(int price: prices){
            mini= min(mini,price);
            maxpro= max(maxpro,price-mini);
        }
         return maxpro;
    }
};