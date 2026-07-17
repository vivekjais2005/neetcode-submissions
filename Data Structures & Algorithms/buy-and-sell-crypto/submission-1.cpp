class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n= nums.size();
        int profit =0;
        int mini =nums[0] ;
        for(int i =0 ;i<n ;i++){
         int cost = nums[i] - mini;
          profit = max(profit , cost);
          mini = min(nums[i] , mini);
        }
        return profit;
    }
};
