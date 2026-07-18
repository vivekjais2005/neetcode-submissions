class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        int maxlen =0;
        for(int i = 0; i <n  ;i++){
            int hash[255] = {0};   // All elements initialized to 0
            int len =0;
            for(int j =i ;j<n ;j++ ){
                if(hash[s[j]] == 1 ) break;
                len = j-i+1;
                maxlen = max(len  , maxlen);
                hash[s[j]] =1;
            }
        }
        return maxlen;
    }
};
