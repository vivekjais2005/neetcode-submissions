class Solution {
public:
    int maxArea(vector<int>& nums) {
        int n = nums.size();
        int area = 0;
       for(int i =0 ; i< n ;i++){
         for(int j =i+1 ;j<n ; j++){
            area = max(area ,((j-i) * min(nums[i],nums[j])));
         }
       }
       return area;
    }
};
