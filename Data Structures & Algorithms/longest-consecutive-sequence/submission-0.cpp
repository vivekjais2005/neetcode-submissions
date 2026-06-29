class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>numset(nums.begin(), nums.end());
        int count =0;
        int longest= 0;
        for(int num  : numset){
           if(numset.find(num-1) == numset.end()){
            int length =1;
            while(numset.find(num+length) != numset.end()) length++;
            longest = max(longest , length);
           }
        }
        return longest;
    }
};
