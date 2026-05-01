class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> s;

        for(int x : nums)
        {
            if(s.contains(x))
            {
                return true;
            }
            else
            {
                s.insert(x);
            }
        }
        return false;
        
    }
};