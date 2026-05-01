class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> mp;

        for(string x : strs)
        {
            string sorted_x = x;
            sort(sorted_x.begin(),sorted_x.end());
            if(mp.find(sorted_x) != mp.end())
            {
                mp[sorted_x].push_back(x);
            } 
            else
            {
                mp[sorted_x] = {x};
            }
        }
        vector<vector<string>> ans;
        for(auto x : mp)
        {
            ans.push_back(x.second);
        }

        return ans;
    }
};
