class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0)
        return 0;
        map<int, int> mp;
        int sz = nums.size();
        for(int i = 0; i < sz; i++)
        {
            mp.insert({nums[i],1});
        }
        
        int ans = -1;

        for(auto pp : mp)
        {
            if(mp.find(pp.first-1) != mp.end())
            {
                mp[pp.first] = mp[pp.first-1]+1;
            }
            
            ans = max(ans, mp[pp.first]);

        }

        return ans;
        
    }
};
