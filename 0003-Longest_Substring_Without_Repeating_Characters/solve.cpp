class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> existed;
        int res = 0;
        int l = 0;
        for (int i = 0;i<s.size();i++){
            while(existed.contains(s[i])){
                existed.erase(s[l]);
                l++;
            }
            existed.insert(s[i]);
            res = max(res, i-l+1);
        }
        return res;
    }
};