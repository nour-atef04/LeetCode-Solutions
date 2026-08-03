class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        priority_queue<pair<int, pair<int, int>>> maxHeap;

        for(const auto& point : points){
            int diff = point[0]*point[0] + point[1]*point[1];
            maxHeap.push({diff, {point[0], point[1]}});
            if (maxHeap.size() > k){
                maxHeap.pop();
            }
        }
        vector<vector<int>> res;
        while(!maxHeap.empty()){
            auto [dist, point] = maxHeap.top();
            res.push_back({point.first, point.second});
            maxHeap.pop();
        }
        return res;
    }
};