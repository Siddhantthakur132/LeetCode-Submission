class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        
        unordered_set<char> st;   // current window ke unique characters store karega
        
        int left = 0;             // window ka start
        int maxLen = 0;           // maximum length store karega

        for (int right = 0; right < s.size(); right++) {

            // 🔴 agar current character already set me hai (duplicate)
            while (st.count(s[right])) {
                // left wale character ko remove karo
                st.erase(s[left]);
                
                // window ko shrink karo (left aage badhao)
                left++;
            }

            // 🟢 ab character unique ho gaya → insert karo
            st.insert(s[right]);

            // 🟢 window ka size calculate karo
            int currLen = right - left + 1;

            // max update karo
            maxLen = max(maxLen, currLen);
        }

        // final answer
        return maxLen;
    }
};