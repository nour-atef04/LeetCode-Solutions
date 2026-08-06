class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> LtoR;
        vector<int> RtoL;

        for(int num : nums){
            if(LtoR.size() == 0) LtoR.push_back(num);
            else{
                LtoR.push_back(LtoR.back() * num);
            }
        }

        for(int i = nums.size()-1; i >= 0; i--){
            if(RtoL.size() == 0) RtoL.push_back(nums[i]);
            else{
                RtoL.push_back(RtoL.back() * nums[i]);
            }
        }

        vector<int> res;
        for(int i = 0; i<nums.size(); i++){
            if(i == 0){
                res.push_back(RtoL[RtoL.size()-2]);
            }
            else if(i == nums.size()-1){
                res.push_back(LtoR[LtoR.size()-2]);
            }
            else{
                res.push_back(LtoR[i-1]*RtoL[RtoL.size()-2-i]);
            }
        }

        return res;
    }
};

// 1, 2, 3, 4, 5
// LtoR: 1, 2, 6, 24, 120
// RtoL: 5, 20, 60, 120, 120

// [120, 60, 40, 30, 24]