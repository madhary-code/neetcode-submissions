class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> post;
        for(int i = nums.size()-1;i >= 0; i--)
        {
            if(i == nums.size()-1)
            post.push_back(nums[nums.size()-1]);
            else
            post.push_back(post.back()*nums[i]);
        }
        reverse(post.begin(),post.end());
        vector<int> result;
        int product = 1;
        for(int i = 0; i < nums.size()-1;i++)
        {
            result.push_back(product*post[i+1]);
            product*= nums[i];
        }

        result.push_back(product);

        return result;

    }
};
