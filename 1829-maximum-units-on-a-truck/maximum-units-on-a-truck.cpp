class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(), boxTypes.end(), [](const vector<int>& a, const vector<int>& b){
            return a[1] > b[1];
        });

        int total = 0;
        for(vector<int>& boxType : boxTypes){
            int boxes = boxType[0];
            int units = boxType[1];

            int take = min(boxes, truckSize);

            total += take*units;
            truckSize -= take;
            if(truckSize <= 0) break;
        }

        return total;
    }
};