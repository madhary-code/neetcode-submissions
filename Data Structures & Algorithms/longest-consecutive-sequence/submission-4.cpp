class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;
    unordered_set<int> st(nums.begin(), nums.end());

    int longest = 0;

    for (int num : st) {
        if (st.find(num - 1) == st.end()) { // start of sequence
            int curr = num;
            int length = 1;

            while (st.find(curr + 1) != st.end()) {
                curr++;
                length++;
            }

            longest = max(longest, length);
        }
    }

    return longest;
    }
};
