class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n = strs.size();
        unordered_map<string ,vector<string>>mp;
        vector<vector<string> >result;

        for(auto s :strs){
              vector<char>ans(26 ,0);
            for(auto c : s){
              ans[c-'a']++;
            }
            
            string key;
            for(auto x : ans){
                key += to_string(x) + '#';
            }
            mp[key].push_back(s);
        }

        for(auto  it  :mp){
            result.push_back(it.second);
        }
       return result; 
    }
};
