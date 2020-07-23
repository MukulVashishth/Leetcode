class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        unordered_map<int,int>mpk;
        vector<int> vec;
        for(auto x : nums)
            mpk[x]++;
        for(auto it=mpk.begin();it!=mpk.end();it++)
        {
                if(it->second == 1)
                    vec.push_back(it->first);
        }
        return vec;
    }
};