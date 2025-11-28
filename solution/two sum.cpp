class Solution {
public:
    // 回傳型別 函式名稱 參數1 參數2
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int, int> seen;

        // 初始化          條件判斷        每次迴圈結束後的動作
        for (int i = 0; i < nums.size(); ++i){
            int complement = target - nums[i];
            if (seen.count(complement)){
                return {seen[complement], i};
            }
            seen[nums[i]] = i;

        }
        return {};
        
    }
};
