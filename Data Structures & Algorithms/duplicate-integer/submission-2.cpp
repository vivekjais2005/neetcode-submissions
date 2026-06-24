class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
        bool flag = false;
        unordered_map<int , int>mp;
        for(int i = 0;i<n ;i++){
            mp[nums[i]]++;
        }
        for(auto el:mp){
            if(el.second >1){
            flag = true;
        }
    }
      if(flag == true) return true;
        return false;
    }
};