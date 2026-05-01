class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        multimap<int, int, greater<int>> mp;
        for(int x : nums)
        {
            if(freq.find(x) != freq.end())
            {
                freq[x]++;
            }
            else
            {
                freq[x] = 1;
            }
        }

        vector<int> ans;
        for(auto it : freq)
        {
            mp.insert({it.second, it.first});
        }

        auto it = mp.begin();
        for(int i = 0; i < k;i++)
        {
            ans.push_back(it->second);
            it++;
        }

        return ans;
    }
};