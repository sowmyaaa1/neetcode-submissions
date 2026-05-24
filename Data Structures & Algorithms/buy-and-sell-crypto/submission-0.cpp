class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int diff=INT_MIN, maxDiff=INT_MIN;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                diff=prices[j]-prices[i];
                maxDiff=max(diff, maxDiff);
            }

        }
        if(maxDiff<0) maxDiff=0;
        return maxDiff;
    }
};
