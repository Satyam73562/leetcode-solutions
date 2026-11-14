class Solution {
public:
    int lengthOfLongestSubstringKDistinct(string s, int k) {
        
        int left = 0;
        int ans = 0;

        unordered_map<char, int> mp;

        for(int right = 0; right < s.size(); right++) {

            mp[s[right]]++;

            while(mp.size() > k) {

                mp[s[left]]--;

                if(mp[s[left]] == 0) {
                    mp.erase(s[left]);
                }

                left++;
            }

            ans = max(ans, right - left + 1);
        }

        return ans;
    }
};