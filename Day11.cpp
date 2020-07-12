class Solution {
    void powerSet(vector<int>&nums, int idx , vector<vector<int>>& vec)
    {
        if(idx == nums.size()-1)
        {
            vec.push_back({});
            vec.push_back({nums[idx]});
        }
        else
        {
            powerSet(nums,idx+1,vec);
            int size = vec.size();
            for(int i=0;i<size;i++)
            {
                vector<int> res = vec[i];
                res.push_back(nums[idx]);
                vec.push_back(res);
            }
        }
    }
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        if(nums.empty())
            return {{}};
        vector<vector<int>> vec;
        powerSet(nums,0,vec);
        
        return vec;
    }
};