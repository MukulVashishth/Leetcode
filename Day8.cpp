class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int len = nums.size();
        if(len<3)
            return {};
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        for(int i=0;i<len-2;i++)
        {
            if(i==0 || nums[i]!=nums[i-1])
            {
                int j = i+1;
                int k = len-1;
                while(j<k)
                {
                    int sum = nums[i]+nums[j]+nums[k];
                    if(sum==0)
                    {
                        result.push_back({nums[i],nums[j],nums[k]});
                    while(j<k && nums[j] == nums[j+1])
                        j++;
                    while(j<k && nums[k] == nums[k-1])
                        k--;
                    j++;
                    k--;
                    }
                    else if(sum>0)
                        k--;
                    else
                        j++;
                }
            }
        }
        return result;
    }
};