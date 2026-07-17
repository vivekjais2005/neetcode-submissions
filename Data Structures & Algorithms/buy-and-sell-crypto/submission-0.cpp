class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n= nums.size();
        int profit =0;
        vector<int>prefix(n,0);
        prefix[0] = nums[0];
        for(int i =1 ;i<n ;i++){
          prefix[i] = min(prefix[i-1] ,nums[i]);
        }
        for(int i =0 ;i<n ;i++){
          profit = max(profit ,nums[i] -prefix[i]);
        }
        return profit;
    }
};
