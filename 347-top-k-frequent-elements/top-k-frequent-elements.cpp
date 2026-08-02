class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> map; // num, freq
        for(int num : nums){
            map[num]++;
        }

        priority_queue<pair<int, int>> maxHeap;
        for(const auto& [num, freq] : map){
            maxHeap.push({freq, num});
        } 

        vector<int> res;
        while(k--){
            res.push_back(maxHeap.top().second);
            maxHeap.pop();
        }

        return res;
    }
};