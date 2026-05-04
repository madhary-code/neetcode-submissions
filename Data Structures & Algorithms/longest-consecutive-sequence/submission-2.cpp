class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() == 0)
        return 0;
        unordered_map<int,int> mp;
        int sz = nums.size();
        for(int i = 0; i < sz; i++)
        {
            mp.insert({nums[i],1});
        }

        int ans = -1;
        for(int i = 0; i < sz; i++)
        {
            if(mp.find(nums[i]-1) != mp.end())
            {
                mp[nums[i]] = mp[nums[i]-1]+1;
            }
                ans = max(ans, mp[nums[i]]);

        }

        return ans;
        
    }
};
