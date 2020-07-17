class Solution {
public:
    // bool cmp(pair<int,int>& a, pair<int,int>& b)
    //    {
    //     return a.second < b.second;
    //    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
//         map<int,int>mpk;
//         for(auto x : nums)
//             mpk[x]++;
//         vector<pair<int,int>> vec;
        
//         for(auto &it : mpk)
//             vec.push_back(it);
        
//         sort(vec.begin(),vec.end(),cmp);
            
//         vector<int>v;
//         for(int i=0;i<k;i++)
//             v.push_back(vec[i].first);
        
//         return v;
        if(k == nums.size())
            return nums;
        unordered_map<int,int> mpk;
        for(auto x : nums)
            mpk[x]++;
        
        vector<int> vec;
        priority_queue<pair<int,int>> pq;
        
        for(auto it = mpk.begin() ; it!=mpk.end() ; it++)
            pq.push({it->second,it->first}); 
        while(k--)
            vec.push_back(pq.top().second) , pq.pop();
        return vec;
    }
};