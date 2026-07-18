class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int left = 0;
        int right = 0;
        int maxlen = 0;

        unordered_map<char, int> mpp;

        while (right < n) {

            char ch = s[right];

            if (mpp.find(ch) != mpp.end()) {
                left = max(left, mpp[ch] + 1);
            }

            mpp[ch] = right;

            maxlen = max(maxlen, right - left + 1);

            right++;
        }

        return maxlen;
    }
};