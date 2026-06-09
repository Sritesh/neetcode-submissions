class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        vector<int> result;
        unordered_map<int, int> count;

        for(auto& n:nums)
        {
            count[n]++;
        }

        priority_queue<pair<int, int>> pq;
        for(auto& m:count)
        {
            pq.push({m.second, m.first});
        }
        
        while(k-- > 0)
        {
            result.push_back(pq.top().second);
            pq.pop();
        }
        
        return result;
    }
};
